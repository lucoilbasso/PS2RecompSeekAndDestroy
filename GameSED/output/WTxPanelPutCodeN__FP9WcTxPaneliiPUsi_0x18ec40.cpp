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

// Function: WTxPanelPutCodeN__FP9WcTxPaneliiPUsi
// Address: 0x18ec40 - 0x18ecb4
void WTxPanelPutCodeN__FP9WcTxPaneliiPUsi_0x18ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelPutCodeN__FP9WcTxPaneliiPUsi_0x18ec40");
#endif

    switch (ctx->pc) {
        case 0x18ec80u: goto label_18ec80;
        case 0x18ec94u: goto label_18ec94;
        default: break;
    }

    ctx->pc = 0x18ec40u;

    // 0x18ec40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ec44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ec48: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x18ec48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18ec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18ec50: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18ec50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18ec58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ec58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18ec5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18ec60: 0x8e420208  lw          $v0, 0x208($s2)
    ctx->pc = 0x18ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x18ec64: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x18ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x18ec68: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x18ec68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18ec6c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18ec70: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x18ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18ec74: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EC74u;
    {
        const bool branch_taken_0x18ec74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC74u;
        // 0x18ec78: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec74) {
            ctx->pc = 0x18EC9Cu;
            goto label_18ec9c;
        }
    }
    ctx->pc = 0x18EC7Cu;
    // 0x18ec7c: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x18ec7cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_18ec80:
    // 0x18ec80: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x18ec80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x18ec84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x18ec84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18ec88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ec88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec8c: 0xc0632e6  jal         func_18CB98
    ctx->pc = 0x18EC8Cu;
    SET_GPR_U32(ctx, 31, 0x18EC94u);
    ctx->pc = 0x18EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC8Cu;
    // 0x18ec90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CB98u, 0x18EC8Cu, 0x18EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC94u;
label_18ec94:
    // 0x18ec94: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18EC94u;
    {
        const bool branch_taken_0x18ec94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ec94) {
            ctx->pc = 0x18EC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EC94u;
            // 0x18ec98: 0x96260000  lhu         $a2, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ec80;
        }
    }
    ctx->pc = 0x18EC9Cu;
label_18ec9c:
    // 0x18ec9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ec9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eca0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18eca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18eca4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18eca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18eca8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18eca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecac: 0x3e00008  jr          $ra
    ctx->pc = 0x18ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECACu;
        // 0x18ecb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ECB4u;
}
