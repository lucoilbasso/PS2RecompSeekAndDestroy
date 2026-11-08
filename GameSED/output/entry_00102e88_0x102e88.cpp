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

// Function: entry_00102e88
// Address: 0x102e88 - 0x102ed8
void entry_00102e88_0x102e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102e88_0x102e88");
#endif

    ctx->pc = 0x102e88u;

    // 0x102e88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x102e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x102e8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x102e8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102e94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x102e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x102e98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x102e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x102e9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x102e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x102ea0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x102ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x102ea4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x102ea8: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x102ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x102eac: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x102eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x102eb0: 0x1482004b  bne         $a0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x102EB0u;
    {
        const bool branch_taken_0x102eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EB0u;
        // 0x102eb4: 0x8c720044  lw          $s2, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102eb0) {
            ctx->pc = 0x102FE0u;
            return;
        }
    }
    ctx->pc = 0x102EB8u;
    // 0x102eb8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x102eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x102ebc: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x102EBCu;
    {
        const bool branch_taken_0x102ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102ebc) {
            ctx->pc = 0x102EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102EBCu;
            // 0x102ec0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102F60u;
            return;
        }
    }
    ctx->pc = 0x102EC4u;
    // 0x102ec4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x102ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x102ec8: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x102ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ecc: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x102ECCu;
    {
        const bool branch_taken_0x102ecc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x102ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ECCu;
        // 0x102ed0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ecc) {
            ctx->pc = 0x102F50u;
            return;
        }
    }
    ctx->pc = 0x102ED4u;
    // 0x102ed4: 0x0  nop
    ctx->pc = 0x102ed4u;
    // NOP
    ctx->pc = 0x102ed8u;
}
