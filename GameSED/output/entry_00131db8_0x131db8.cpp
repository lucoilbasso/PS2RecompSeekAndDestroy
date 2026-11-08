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

// Function: entry_00131db8
// Address: 0x131db8 - 0x131de0
void entry_00131db8_0x131db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131db8_0x131db8");
#endif

    ctx->pc = 0x131db8u;

    // 0x131db8: 0x15600010  bnez        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x131DB8u;
    {
        const bool branch_taken_0x131db8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x131db8) {
            ctx->pc = 0x131DFCu;
            return;
        }
    }
    ctx->pc = 0x131DC0u;
    // 0x131dc0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x131dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x131dc4: 0x244294f0  addiu       $v0, $v0, -0x6B10
    ctx->pc = 0x131dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939888));
    // 0x131dc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x131DC8u;
    {
        const bool branch_taken_0x131dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dc8) {
            ctx->pc = 0x131DFCu;
            return;
        }
    }
    ctx->pc = 0x131DD0u;
    // 0x131dd0: 0x24430c60  addiu       $v1, $v0, 0xC60
    ctx->pc = 0x131dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x131dd4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x131DD4u;
    {
        const bool branch_taken_0x131dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131dd4) {
            ctx->pc = 0x131DFCu;
            return;
        }
    }
    ctx->pc = 0x131DDCu;
    // 0x131ddc: 0x2463ffb8  addiu       $v1, $v1, -0x48
    ctx->pc = 0x131ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
    ctx->pc = 0x131de0u;
}
