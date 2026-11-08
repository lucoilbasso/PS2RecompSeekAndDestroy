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

// Function: entry_0015586c
// Address: 0x15586c - 0x15588c
void entry_0015586c_0x15586c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015586c_0x15586c");
#endif

    ctx->pc = 0x15586cu;

    // 0x15586c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x15586cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x155870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x155870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x155874: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x155874u;
    {
        const bool branch_taken_0x155874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155874) {
            ctx->pc = 0x155878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155874u;
            // 0x155878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1558A4u;
            return;
        }
    }
    ctx->pc = 0x15587Cu;
    // 0x15587c: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x15587cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x155880: 0x8c621ab4  lw          $v0, 0x1AB4($v1)
    ctx->pc = 0x155880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6836)));
    // 0x155884: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x155884u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x155888: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x15588cu;
}
