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

// Function: SetWorldBase__8WcEntityP8WcEntityT1
// Address: 0x1860a8 - 0x186130
void SetWorldBase__8WcEntityP8WcEntityT1_0x1860a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWorldBase__8WcEntityP8WcEntityT1_0x1860a8");
#endif

    switch (ctx->pc) {
        case 0x1860d0u: goto label_1860d0;
        case 0x18610cu: goto label_18610c;
        default: break;
    }

    ctx->pc = 0x1860a8u;

label_1860a8:
    // 0x1860a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1860a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1860ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1860acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1860b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1860b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1860b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1860b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1860b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1860bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1860c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1860c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1860c4: 0xac920124  sw          $s2, 0x124($a0)
    ctx->pc = 0x1860c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 18));
    // 0x1860c8: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x1860c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1860cc: 0xac910128  sw          $s1, 0x128($a0)
    ctx->pc = 0x1860ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 17));
label_1860d0:
    // 0x1860d0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x186118u;
            goto label_186118;
        }
    }
    ctx->pc = 0x1860D8u;
    // 0x1860d8: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x1860dc: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1860DCu;
    {
        const bool branch_taken_0x1860dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1860E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860DCu;
        // 0x1860e0: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860dc) {
            ctx->pc = 0x186100u;
            goto label_186100;
        }
    }
    ctx->pc = 0x1860E4u;
    // 0x1860e4: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x1860e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x1860e8: 0x0  nop
    ctx->pc = 0x1860e8u;
    // NOP
    // 0x1860ec: 0x0  nop
    ctx->pc = 0x1860ecu;
    // NOP
    // 0x1860f0: 0x0  nop
    ctx->pc = 0x1860f0u;
    // NOP
    // 0x1860f4: 0x1051fff6  beq         $v0, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1860F4u;
    {
        const bool branch_taken_0x1860f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1860f4) {
            ctx->pc = 0x1860D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1860d0;
        }
    }
    ctx->pc = 0x1860FCu;
    // 0x1860fc: 0x0  nop
    ctx->pc = 0x1860fcu;
    // NOP
label_186100:
    // 0x186100: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186104: 0xc06182a  jal         func_1860A8
    ctx->pc = 0x186104u;
    SET_GPR_U32(ctx, 31, 0x18610Cu);
    ctx->pc = 0x186108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186104u;
    // 0x186108: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1860A8u;
    goto label_1860a8;
    ctx->pc = 0x18610Cu;
label_18610c:
    // 0x18610c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x18610Cu;
    {
        const bool branch_taken_0x18610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18610c) {
            ctx->pc = 0x1860D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1860d0;
        }
    }
    ctx->pc = 0x186114u;
    // 0x186114: 0x0  nop
    ctx->pc = 0x186114u;
    // NOP
label_186118:
    // 0x186118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18611c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18611cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186124: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x186124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x186128: 0x3e00008  jr          $ra
    ctx->pc = 0x186128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186128u;
        // 0x18612c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186130u;
}
