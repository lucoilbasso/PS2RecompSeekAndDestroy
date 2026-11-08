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

// Function: entry_00138afc
// Address: 0x138afc - 0x138b18
void entry_00138afc_0x138afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138afc_0x138afc");
#endif

    ctx->pc = 0x138afcu;

    // 0x138afc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x138afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x138b00: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x138b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x138b04: 0x0  nop
    ctx->pc = 0x138b04u;
    // NOP
    // 0x138b08: 0x0  nop
    ctx->pc = 0x138b08u;
    // NOP
    // 0x138b0c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x138B0Cu;
    {
        const bool branch_taken_0x138b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138b0c) {
            ctx->pc = 0x138B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138B0Cu;
            // 0x138b10: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138AF0u;
            return;
        }
    }
    ctx->pc = 0x138B14u;
    // 0x138b14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x138b14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138b18u;
}
