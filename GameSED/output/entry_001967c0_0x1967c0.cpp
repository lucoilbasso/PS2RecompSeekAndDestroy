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

// Function: entry_001967c0
// Address: 0x1967c0 - 0x196818
void entry_001967c0_0x1967c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001967c0_0x1967c0");
#endif

    ctx->pc = 0x1967c0u;

    // 0x1967c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1967c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1967c4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1967c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1967c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1967cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1967ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1967d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1967d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1967d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1967d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1967d8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1967d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1967dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1967dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1967e0: 0x8ed5015c  lw          $s5, 0x15C($s6)
    ctx->pc = 0x1967e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x1967e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1967e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1967e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1967e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1967ec: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x1967ECu;
    {
        const bool branch_taken_0x1967ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967ECu;
        // 0x1967f0: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967ec) {
            ctx->pc = 0x196B64u;
            return;
        }
    }
    ctx->pc = 0x1967F4u;
    // 0x1967f4: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1967f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1967f8: 0x96420150  lhu         $v0, 0x150($s2)
    ctx->pc = 0x1967f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1967fc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1967fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x196800: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x196800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x196804: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x196804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x196808: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196808u;
    {
        const bool branch_taken_0x196808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196808u;
        // 0x19680c: 0x2b82b  sltu        $s7, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196808) {
            ctx->pc = 0x196818u;
            return;
        }
    }
    ctx->pc = 0x196810u;
    // 0x196810: 0xc061920  jal         func_186480
    ctx->pc = 0x196810u;
    SET_GPR_U32(ctx, 31, 0x196818u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x196810u, 0x196818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196818u;
}
