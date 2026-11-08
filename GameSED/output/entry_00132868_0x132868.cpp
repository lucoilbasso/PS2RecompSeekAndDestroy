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

// Function: entry_00132868
// Address: 0x132868 - 0x1328a8
void entry_00132868_0x132868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132868_0x132868");
#endif

    ctx->pc = 0x132868u;

    // 0x132868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13286c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13286cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132870: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132878: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x132878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x13287c: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x13287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x132880: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x132880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x132884: 0x8c8402f8  lw          $a0, 0x2F8($a0)
    ctx->pc = 0x132884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x132888: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x132888u;
    {
        const bool branch_taken_0x132888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132888u;
        // 0x13288c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132888) {
            ctx->pc = 0x1328BCu;
            return;
        }
    }
    ctx->pc = 0x132890u;
    // 0x132890: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x132890u;
    {
        const bool branch_taken_0x132890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x132894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132890u;
        // 0x132894: 0x8c900150  lw          $s0, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132890) {
            ctx->pc = 0x1328BCu;
            return;
        }
    }
    ctx->pc = 0x132898u;
    // 0x132898: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x132898u;
    {
        const bool branch_taken_0x132898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x132898) {
            ctx->pc = 0x13289Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132898u;
            // 0x13289c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1328C0u;
            return;
        }
    }
    ctx->pc = 0x1328A0u;
    // 0x1328a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1328a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328a4: 0x0  nop
    ctx->pc = 0x1328a4u;
    // NOP
    ctx->pc = 0x1328a8u;
}
