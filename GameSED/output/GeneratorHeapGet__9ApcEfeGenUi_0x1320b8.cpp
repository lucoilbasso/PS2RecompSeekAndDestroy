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

// Function: GeneratorHeapGet__9ApcEfeGenUi
// Address: 0x1320b8 - 0x132144
void GeneratorHeapGet__9ApcEfeGenUi_0x1320b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneratorHeapGet__9ApcEfeGenUi_0x1320b8");
#endif

    switch (ctx->pc) {
        case 0x1320fcu: goto label_1320fc;
        case 0x132124u: goto label_132124;
        default: break;
    }

    ctx->pc = 0x1320b8u;

    // 0x1320b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1320b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1320bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1320bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1320c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1320c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1320c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1320c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1320c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1320cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1320ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1320d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1320d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320d4: 0x8e040158  lw          $a0, 0x158($s0)
    ctx->pc = 0x1320d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1320d8: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1320D8u;
    {
        const bool branch_taken_0x1320d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1320DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320D8u;
        // 0x1320dc: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320d8) {
            ctx->pc = 0x132134u;
            goto label_132134;
        }
    }
    ctx->pc = 0x1320E0u;
    // 0x1320e0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1320e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1320e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1320e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320e8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1320E8u;
    {
        const bool branch_taken_0x1320e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1320ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320E8u;
        // 0x1320ec: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320e8) {
            ctx->pc = 0x1320F4u;
            goto label_1320f4;
        }
    }
    ctx->pc = 0x1320F0u;
    // 0x1320f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1320f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1320f4:
    // 0x1320f4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1320F4u;
    SET_GPR_U32(ctx, 31, 0x1320FCu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1320F4u, 0x1320FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1320FCu;
label_1320fc:
    // 0x1320fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1320fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x132100: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13210c: 0x24a55fd8  addiu       $a1, $a1, 0x5FD8
    ctx->pc = 0x13210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24536));
    // 0x132110: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x132110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132114: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x132114u;
    {
        const bool branch_taken_0x132114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x132118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132114u;
        // 0x132118: 0xae030158  sw          $v1, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132114) {
            ctx->pc = 0x132130u;
            goto label_132130;
        }
    }
    ctx->pc = 0x13211Cu;
    // 0x13211c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13211Cu;
    SET_GPR_U32(ctx, 31, 0x132124u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13211Cu, 0x132124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132124u;
label_132124:
    // 0x132124: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132124u;
    {
        const bool branch_taken_0x132124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132124u;
        // 0x132128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132124) {
            ctx->pc = 0x132134u;
            goto label_132134;
        }
    }
    ctx->pc = 0x13212Cu;
    // 0x13212c: 0x0  nop
    ctx->pc = 0x13212cu;
    // NOP
label_132130:
    // 0x132130: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x132130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_132134:
    // 0x132134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132138: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x132138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13213c: 0x3e00008  jr          $ra
    ctx->pc = 0x13213Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13213Cu;
        // 0x132140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13213Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132144u;
}
