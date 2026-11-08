#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001b17f0
// Address: 0x1b17f0 - 0x1b1854
void entry_001b17f0_0x1b17f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b17f0_0x1b17f0");
#endif

    ctx->pc = 0x1b17f0u;

    // 0x1b17f0: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1b17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x1b17f4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1b17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b17f8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1b17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1b17fc: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x1b17fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x1b1800: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x1b1800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x1b1804: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1b1804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b1808: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x1b1808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x1b180c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1b180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1b1810: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1b1810u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1b1814: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1b1814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b1818: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1b1818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1b181c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1b181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1b1820: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1b1820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1b1824: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1b1824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b1828: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1b1828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1b182c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1b182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b1830: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x1b1830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x1b1834: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1b1834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1838: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1838u;
    {
        const bool branch_taken_0x1b1838 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1b1838) {
            ctx->pc = 0x1B1854u;
            return;
        }
    }
    ctx->pc = 0x1B1840u;
    // 0x1b1840: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1b1840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b1844: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1844u;
    {
        const bool branch_taken_0x1b1844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1844) {
            ctx->pc = 0x1B1854u;
            return;
        }
    }
    ctx->pc = 0x1B184Cu;
    // 0x1b184c: 0x806dd5e  j           func_1B7578
    ctx->pc = 0x1B184Cu;
    ctx->pc = 0x1B7578u;
    iWakeupThread_0x1b7578(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1854u;
}
