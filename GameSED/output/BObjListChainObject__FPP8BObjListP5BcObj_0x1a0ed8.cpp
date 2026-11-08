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

// Function: BObjListChainObject__FPP8BObjListP5BcObj
// Address: 0x1a0ed8 - 0x1a0fbc
void BObjListChainObject__FPP8BObjListP5BcObj_0x1a0ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjListChainObject__FPP8BObjListP5BcObj_0x1a0ed8");
#endif

    switch (ctx->pc) {
        case 0x1a0f20u: goto label_1a0f20;
        default: break;
    }

    ctx->pc = 0x1a0ed8u;

    // 0x1a0ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0edc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1a0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1a0ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0ee4: 0x2450e530  addiu       $s0, $v0, -0x1AD0
    ctx->pc = 0x1a0ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x1a0ee8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a0eec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a0ef0: 0x8c422c08  lw          $v0, 0x2C08($v0)
    ctx->pc = 0x1a0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281138u));
    // 0x1a0ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0ef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0efc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a0efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a0f00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a0f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a0f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a0f08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0F08u;
    {
        const bool branch_taken_0x1a0f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F08u;
        // 0x1a0f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f08) {
            ctx->pc = 0x1A0F28u;
            goto label_1a0f28;
        }
    }
    ctx->pc = 0x1A0F10u;
    // 0x1a0f10: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a0f14: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1a0f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a0f18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0F18u;
    SET_GPR_U32(ctx, 31, 0x1A0F20u);
    ctx->pc = 0x1A0F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F18u;
    // 0x1a0f1c: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0F18u, 0x1A0F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F20u;
label_1a0f20:
    // 0x1a0f20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0F20u;
    {
        const bool branch_taken_0x1a0f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f20) {
            ctx->pc = 0x1A0F38u;
            goto label_1a0f38;
        }
    }
    ctx->pc = 0x1A0F28u;
label_1a0f28:
    // 0x1a0f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0f2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f30: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a0f30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a0f34: 0xac222c08  sw          $v0, 0x2C08($at)
    ctx->pc = 0x1a0f34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 2));
label_1a0f38:
    // 0x1a0f38: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1a0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f3c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1a0f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a0f40: 0x8c842c00  lw          $a0, 0x2C00($a0)
    ctx->pc = 0x1a0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11264)));
    // 0x1a0f44: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A0F44u;
    {
        const bool branch_taken_0x1a0f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f44) {
            ctx->pc = 0x1A0F78u;
            goto label_1a0f78;
        }
    }
    ctx->pc = 0x1A0F4Cu;
    // 0x1a0f4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a0f54: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a0f58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0f5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a0f60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f64: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a0f64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a0f68: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
    // 0x1a0f6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f70: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a0f70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a0f74: 0xac232c00  sw          $v1, 0x2C00($at)
    ctx->pc = 0x1a0f74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 3));
label_1a0f78:
    // 0x1a0f78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f7c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a0f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a0f80: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a0f80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a0f84: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0F84u;
    {
        const bool branch_taken_0x1a0f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F84u;
        // 0x1a0f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f84) {
            ctx->pc = 0x1A0FA0u;
            goto label_1a0fa0;
        }
    }
    ctx->pc = 0x1A0F8Cu;
    // 0x1a0f8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a0f90: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x1a0f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x1a0f94: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a0f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F98u;
    {
        const bool branch_taken_0x1a0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F98u;
        // 0x1a0f9c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f98) {
            ctx->pc = 0x1A0FA4u;
            goto label_1a0fa4;
        }
    }
    ctx->pc = 0x1A0FA0u;
label_1a0fa0:
    // 0x1a0fa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0fa4:
    // 0x1a0fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0fac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a0facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0fb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a0fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FB4u;
        // 0x1a0fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0FBCu;
}
