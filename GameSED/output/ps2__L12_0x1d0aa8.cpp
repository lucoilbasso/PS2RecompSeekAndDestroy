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

// Function: $L12
// Address: 0x1d0aa8 - 0x1d0ac8
void ps2__L12_0x1d0aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L12_0x1d0aa8");
#endif

    ctx->pc = 0x1d0aa8u;

    // 0x1d0aa8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1d0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1d0aac: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1d0aacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0ab0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1d0ab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1d0ab4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0AB4u;
    {
        const bool branch_taken_0x1d0ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0ab4) {
            ctx->pc = 0x1D0AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0AB4u;
            // 0x1d0ab8: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0AD0u;
            return;
        }
    }
    ctx->pc = 0x1D0ABCu;
    // 0x1d0abc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d0abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d0ac0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d0ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d0ac4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1d0ac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x1d0ac8u;
}
