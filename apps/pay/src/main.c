#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(pay);

int main(void)
{
	while (1) {
		LOG_INF("pay-commit-2");
		k_msleep(1000);
	}
	return 0;
}
