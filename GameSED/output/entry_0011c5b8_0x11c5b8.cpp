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

// Function: entry_0011c5b8
// Address: 0x11c5b8 - 0x11c5f8
void entry_0011c5b8_0x11c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c5b8_0x11c5b8");
#endif

    ctx->pc = 0x11c5b8u;

label_11c5b8:
    // 0x11c5b8: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x11c5b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c5bc: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x11c5bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11c5c0: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x11c5c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11c5c4: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x11c5c4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11c5c8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x11c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x11c5cc: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x11c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x11c5d0: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x11c5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x11c5d4: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x11c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x11c5d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c5dc: 0x0  nop
    ctx->pc = 0x11c5dcu;
    // NOP
    // 0x11c5e0: 0x0  nop
    ctx->pc = 0x11c5e0u;
    // NOP
    // 0x11c5e4: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C5E4u;
    {
        const bool branch_taken_0x11c5e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5E4u;
        // 0x11c5e8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5e4) {
            ctx->pc = 0x11C5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c5b8;
        }
    }
    ctx->pc = 0x11C5ECu;
    // 0x11c5ec: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x11C5ECu;
    {
        const bool branch_taken_0x11c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5ECu;
        // 0x11c5f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5ec) {
            ctx->pc = 0x11C70Cu;
            return;
        }
    }
    ctx->pc = 0x11C5F4u;
    // 0x11c5f4: 0x0  nop
    ctx->pc = 0x11c5f4u;
    // NOP
    ctx->pc = 0x11c5f8u;
}
