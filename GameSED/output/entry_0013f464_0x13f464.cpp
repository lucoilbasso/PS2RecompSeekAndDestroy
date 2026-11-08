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

// Function: entry_0013f464
// Address: 0x13f464 - 0x13f4d0
void entry_0013f464_0x13f464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f464_0x13f464");
#endif

    switch (ctx->pc) {
        case 0x13f4ccu: goto label_13f4cc;
        default: break;
    }

    ctx->pc = 0x13f464u;

    // 0x13f464: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13f468: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x13f468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13f46c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13f46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13f470: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f474: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13f478: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13f478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x13f47c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x13f47cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f480: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f484: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x13f484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13f488: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x13f488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f48c: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x13f48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x13f490: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x13f490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13f494: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x13f494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f498: 0x872026  xor         $a0, $a0, $a3
    ctx->pc = 0x13f498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
    // 0x13f49c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13f49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13f4a0: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x13f4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x13f4a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13f4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13f4a8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x13F4A8u;
    {
        const bool branch_taken_0x13f4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4A8u;
        // 0x13f4ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4a8) {
            ctx->pc = 0x13F564u;
            return;
        }
    }
    ctx->pc = 0x13F4B0u;
    // 0x13f4b0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x13f4b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13f4b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13f4b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4b8: 0x11130005  beq         $t0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F4B8u;
    {
        const bool branch_taken_0x13f4b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x13F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4B8u;
        // 0x13f4bc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4b8) {
            ctx->pc = 0x13F4D0u;
            return;
        }
    }
    ctx->pc = 0x13F4C0u;
    // 0x13f4c0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x13f4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4c4: 0xc067c32  jal         func_19F0C8
    ctx->pc = 0x13F4C4u;
    SET_GPR_U32(ctx, 31, 0x13F4CCu);
    ctx->pc = 0x13F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4C4u;
    // 0x13f4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x13F4C4u, 0x13F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4CCu;
label_13f4cc:
    // 0x13f4cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13f4ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13f4d0u;
}
