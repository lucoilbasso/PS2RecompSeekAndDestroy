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

// Function: $L2
// Address: 0x1d0b58 - 0x1d0b8c
void ps2__L2_0x1d0b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L2_0x1d0b58");
#endif

    ctx->pc = 0x1d0b58u;

label_1d0b58:
    // 0x1d0b58: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x1d0b58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x1d0b5c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1d0b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1d0b60: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x1d0b60u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0b64: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x1d0b64u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x1d0b68: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x1d0b68u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x1d0b6c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x1d0b6cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d0b70: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x1d0b70u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1d0b74: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x1d0b74u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1d0b78: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1d0b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d0b7c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D0B7Cu;
    {
        const bool branch_taken_0x1d0b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B7Cu;
        // 0x1d0b80: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b7c) {
            ctx->pc = 0x1D0B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0b58;
        }
    }
    ctx->pc = 0x1D0B84u;
    // 0x1d0b84: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D0B84u;
    {
        const bool branch_taken_0x1d0b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B84u;
        // 0x1d0b88: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b84) {
            ctx->pc = 0x1D0BCCu;
            return;
        }
    }
    ctx->pc = 0x1D0B8Cu;
}
