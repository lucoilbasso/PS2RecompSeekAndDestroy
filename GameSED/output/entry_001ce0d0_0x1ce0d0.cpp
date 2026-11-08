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

// Function: entry_001ce0d0
// Address: 0x1ce0d0 - 0x1ce130
void entry_001ce0d0_0x1ce0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce0d0_0x1ce0d0");
#endif

    ctx->pc = 0x1ce0d0u;

label_1ce0d0:
    // 0x1ce0d0: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1ce0d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce0d4: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1ce0d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce0d8: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x1ce0d8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ce0dc: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x1ce0dcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1ce0e0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1ce0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1ce0e4: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1ce0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1ce0e8: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1ce0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1ce0ec: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x1ce0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x1ce0f0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1ce0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1ce0f4: 0x0  nop
    ctx->pc = 0x1ce0f4u;
    // NOP
    // 0x1ce0f8: 0x0  nop
    ctx->pc = 0x1ce0f8u;
    // NOP
    // 0x1ce0fc: 0x1457fff4  bne         $v0, $s7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CE0FCu;
    {
        const bool branch_taken_0x1ce0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x1CE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0FCu;
        // 0x1ce100: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0fc) {
            ctx->pc = 0x1CE0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce0d0;
        }
    }
    ctx->pc = 0x1CE104u;
    // 0x1ce104: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x1ce104u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce108: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x1ce108u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce10c: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x1ce10cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ce110: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x1ce110u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1ce114: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1ce114u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1ce118: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x1ce118u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x1ce11c: 0x8fa70d8c  lw          $a3, 0xD8C($sp)
    ctx->pc = 0x1ce11cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3468)));
    // 0x1ce120: 0x50f50024  beql        $a3, $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CE120u;
    {
        const bool branch_taken_0x1ce120 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 21));
        if (branch_taken_0x1ce120) {
            ctx->pc = 0x1CE124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE120u;
            // 0x1ce124: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE1B4u;
            return;
        }
    }
    ctx->pc = 0x1CE128u;
    // 0x1ce128: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1ce128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce12c: 0x0  nop
    ctx->pc = 0x1ce12cu;
    // NOP
    ctx->pc = 0x1ce130u;
}
