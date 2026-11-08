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

// Function: GdCellAlloc__6WcFont
// Address: 0x183cb8 - 0x183d64
void GdCellAlloc__6WcFont_0x183cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GdCellAlloc__6WcFont_0x183cb8");
#endif

    switch (ctx->pc) {
        case 0x183d1cu: goto label_183d1c;
        case 0x183d3cu: goto label_183d3c;
        case 0x183d44u: goto label_183d44;
        case 0x183d4cu: goto label_183d4c;
        case 0x183d54u: goto label_183d54;
        default: break;
    }

    ctx->pc = 0x183cb8u;

    // 0x183cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183cbc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x183cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x183cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x183cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x183ccc: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x183cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x183cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cd4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x183cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x183cd8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x183cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x183cdc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x183cdcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x183ce0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x183CE0u;
    {
        const bool branch_taken_0x183ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183ce0) {
            ctx->pc = 0x183CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183CE0u;
            // 0x183ce4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x183CE8u;
            goto label_183ce8;
        }
    }
    ctx->pc = 0x183CE8u;
label_183ce8:
    // 0x183ce8: 0x1812  mflo        $v1
    ctx->pc = 0x183ce8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x183cec: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x183cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x183cf0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x183cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x183cf4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x183cf4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x183cf8: 0x2012  mflo        $a0
    ctx->pc = 0x183cf8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x183cfc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x183cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x183d00: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x183d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x183d04: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x183d04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x183d08: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x183D08u;
    {
        const bool branch_taken_0x183d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D08u;
        // 0x183d0c: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d08) {
            ctx->pc = 0x183D14u;
            goto label_183d14;
        }
    }
    ctx->pc = 0x183D10u;
    // 0x183d10: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x183d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183d14:
    // 0x183d14: 0xc068086  jal         func_1A0218
    ctx->pc = 0x183D14u;
    SET_GPR_U32(ctx, 31, 0x183D1Cu);
    ctx->pc = 0x183D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D14u;
    // 0x183d18: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x183D14u, 0x183D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D1Cu;
label_183d1c:
    // 0x183d1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x183d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x183d20: 0x24a57e50  addiu       $a1, $a1, 0x7E50
    ctx->pc = 0x183d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32336));
    // 0x183d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183d2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183D2Cu;
    {
        const bool branch_taken_0x183d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D2Cu;
        // 0x183d30: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d2c) {
            ctx->pc = 0x183D3Cu;
            goto label_183d3c;
        }
    }
    ctx->pc = 0x183D34u;
    // 0x183d34: 0xc068186  jal         func_1A0618
    ctx->pc = 0x183D34u;
    SET_GPR_U32(ctx, 31, 0x183D3Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x183D34u, 0x183D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D3Cu;
label_183d3c:
    // 0x183d3c: 0xc060f5a  jal         func_183D68
    ctx->pc = 0x183D3Cu;
    SET_GPR_U32(ctx, 31, 0x183D44u);
    ctx->pc = 0x183D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D3Cu;
    // 0x183d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183D68u, 0x183D3Cu, 0x183D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D44u;
label_183d44:
    // 0x183d44: 0xc060f78  jal         func_183DE0
    ctx->pc = 0x183D44u;
    SET_GPR_U32(ctx, 31, 0x183D4Cu);
    ctx->pc = 0x183D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D44u;
    // 0x183d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183DE0u, 0x183D44u, 0x183D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D4Cu;
label_183d4c:
    // 0x183d4c: 0xc060f8e  jal         func_183E38
    ctx->pc = 0x183D4Cu;
    SET_GPR_U32(ctx, 31, 0x183D54u);
    ctx->pc = 0x183D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D4Cu;
    // 0x183d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183E38u, 0x183D4Cu, 0x183D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D54u;
label_183d54:
    // 0x183d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183d58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x183d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x183D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D5Cu;
        // 0x183d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183D64u;
}
