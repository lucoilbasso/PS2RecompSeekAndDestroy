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

// Function: entry_001cdfd4
// Address: 0x1cdfd4 - 0x1ce034
void entry_001cdfd4_0x1cdfd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdfd4_0x1cdfd4");
#endif

    ctx->pc = 0x1cdfd4u;

label_1cdfd4:
    // 0x1cdfd4: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x1cdfd4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdfd8: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x1cdfd8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cdfdc: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x1cdfdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cdfe0: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x1cdfe0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cdfe4: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x1cdfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x1cdfe8: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x1cdfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x1cdfec: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x1cdfecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x1cdff0: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x1cdff0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x1cdff4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1cdff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1cdff8: 0x0  nop
    ctx->pc = 0x1cdff8u;
    // NOP
    // 0x1cdffc: 0x0  nop
    ctx->pc = 0x1cdffcu;
    // NOP
    // 0x1ce000: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CE000u;
    {
        const bool branch_taken_0x1ce000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE000u;
        // 0x1ce004: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce000) {
            ctx->pc = 0x1CDFD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdfd4;
        }
    }
    ctx->pc = 0x1CE008u;
    // 0x1ce008: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x1ce008u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce00c: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x1ce00cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce010: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x1ce010u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ce014: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x1ce014u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x1ce018: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x1ce018u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x1ce01c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce020: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1ce020u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1ce024: 0xafb00d94  sw          $s0, 0xD94($sp)
    ctx->pc = 0x1ce024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3476), GPR_U32(ctx, 16));
    // 0x1ce028: 0xafb40d90  sw          $s4, 0xD90($sp)
    ctx->pc = 0x1ce028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3472), GPR_U32(ctx, 20));
    // 0x1ce02c: 0xafa60d9c  sw          $a2, 0xD9C($sp)
    ctx->pc = 0x1ce02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3484), GPR_U32(ctx, 6));
    // 0x1ce030: 0xafa60d98  sw          $a2, 0xD98($sp)
    ctx->pc = 0x1ce030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3480), GPR_U32(ctx, 6));
    ctx->pc = 0x1ce034u;
}
