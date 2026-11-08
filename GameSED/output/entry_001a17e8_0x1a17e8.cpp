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

// Function: entry_001a17e8
// Address: 0x1a17e8 - 0x1a187c
void entry_001a17e8_0x1a17e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a17e8_0x1a17e8");
#endif

    switch (ctx->pc) {
        case 0x1a182cu: goto label_1a182c;
        case 0x1a184cu: goto label_1a184c;
        case 0x1a185cu: goto label_1a185c;
        default: break;
    }

    ctx->pc = 0x1a17e8u;

    // 0x1a17e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a17e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a17ec: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1a17ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a17f0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1a17f4: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1a17f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a17f8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1a17f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1a17fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a17fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1800: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a1800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1804: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a1804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1a1808: 0x24424870  addiu       $v0, $v0, 0x4870
    ctx->pc = 0x1a1808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18544));
    // 0x1a180c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a180cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a1810: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1a1810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x1a1814: 0xafb40014  sw          $s4, 0x14($sp)
    ctx->pc = 0x1a1814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
    // 0x1a1818: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x1a1818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x1a181c: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x1a181cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x1a1820: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a1820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1a1824: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x1A1824u;
    SET_GPR_U32(ctx, 31, 0x1A182Cu);
    ctx->pc = 0x1A1828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1824u;
    // 0x1a1828: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x1A1824u, 0x1A182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A182Cu;
label_1a182c:
    // 0x1a182c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a182cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a1830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1834: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1838: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a1838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a183c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1a183cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1a1840: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1a1840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1a1844: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1A1844u;
    SET_GPR_U32(ctx, 31, 0x1A184Cu);
    ctx->pc = 0x1A1848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1844u;
    // 0x1a1848: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1A1844u, 0x1A184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A184Cu;
label_1a184c:
    // 0x1a184c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a1850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1854: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x1A1854u;
    SET_GPR_U32(ctx, 31, 0x1A185Cu);
    ctx->pc = 0x1A1858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1854u;
    // 0x1a1858: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x1A1854u, 0x1A185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A185Cu;
label_1a185c:
    // 0x1a185c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a185cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1860: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1a1860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a1864: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a1864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1868: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1a1868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a186c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1a186cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1870: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1a1870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a1874: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1874u;
        // 0x1a1878: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A187Cu;
}
