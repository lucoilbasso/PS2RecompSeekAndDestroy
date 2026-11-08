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

// Function: entry_00155348
// Address: 0x155348 - 0x155388
void entry_00155348_0x155348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155348_0x155348");
#endif

    ctx->pc = 0x155348u;

    // 0x155348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15534c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15534cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x155350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x155354: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x155354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x155358: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x155358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15535c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x155360: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x155360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x155364: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x155364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x155368: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15536c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x15536cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155370: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x155370u;
    {
        const bool branch_taken_0x155370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x155374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155370u;
        // 0x155374: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155370) {
            ctx->pc = 0x155388u;
            return;
        }
    }
    ctx->pc = 0x155378u;
    // 0x155378: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x15537c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x15537cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x155380: 0xc068186  jal         func_1A0618
    ctx->pc = 0x155380u;
    SET_GPR_U32(ctx, 31, 0x155388u);
    ctx->pc = 0x155384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155380u;
    // 0x155384: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x155380u, 0x155388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155388u;
}
