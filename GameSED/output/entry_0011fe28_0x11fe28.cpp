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

// Function: entry_0011fe28
// Address: 0x11fe28 - 0x11fe48
void entry_0011fe28_0x11fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe28_0x11fe28");
#endif

    ctx->pc = 0x11fe28u;

    // 0x11fe28: 0x18e00024  blez        $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x11FE28u;
    {
        const bool branch_taken_0x11fe28 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x11FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE28u;
        // 0x11fe2c: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe28) {
            ctx->pc = 0x11FEBCu;
            return;
        }
    }
    ctx->pc = 0x11FE30u;
    // 0x11fe30: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11fe34: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x11fe34u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x11fe38: 0x24467100  addiu       $a2, $v0, 0x7100
    ctx->pc = 0x11fe38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
    // 0x11fe3c: 0x24680790  addiu       $t0, $v1, 0x790
    ctx->pc = 0x11fe3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x11fe40: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11fe40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe44: 0x0  nop
    ctx->pc = 0x11fe44u;
    // NOP
    ctx->pc = 0x11fe48u;
}
