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

// Function: __swrite
// Address: 0x1d6428 - 0x1d64a8
void ps2___swrite_0x1d6428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___swrite_0x1d6428");
#endif

    switch (ctx->pc) {
        case 0x1d6468u: goto label_1d6468;
        case 0x1d6488u: goto label_1d6488;
        default: break;
    }

    ctx->pc = 0x1d6428u;

    // 0x1d6428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d642c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d6438: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d6438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d643c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d6440: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d6440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6444: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d6444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d6448: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1d6448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d644c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1d644cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1d6450: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6450u;
    {
        const bool branch_taken_0x1d6450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6450u;
        // 0x1d6454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6450) {
            ctx->pc = 0x1D6468u;
            goto label_1d6468;
        }
    }
    ctx->pc = 0x1D6458u;
    // 0x1d6458: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d6458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d645c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d645cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6460: 0xc0759c0  jal         func_1D6700
    ctx->pc = 0x1D6460u;
    SET_GPR_U32(ctx, 31, 0x1D6468u);
    ctx->pc = 0x1D6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6460u;
    // 0x1d6464: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6700u, 0x1D6460u, 0x1D6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6468u;
label_1d6468:
    // 0x1d6468: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1d6468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d646c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d646cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6470: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1d6470u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d6474: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d6474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6478: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x1d6478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x1d647c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d6480: 0xc07594c  jal         func_1D6530
    ctx->pc = 0x1D6480u;
    SET_GPR_U32(ctx, 31, 0x1D6488u);
    ctx->pc = 0x1D6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6480u;
    // 0x1d6484: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6530u, 0x1D6480u, 0x1D6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6488u;
label_1d6488:
    // 0x1d6488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d648c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d6490: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d6490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d6494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6498: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d649c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d649cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d64a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D64A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64A0u;
        // 0x1d64a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D64A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D64A8u;
}
