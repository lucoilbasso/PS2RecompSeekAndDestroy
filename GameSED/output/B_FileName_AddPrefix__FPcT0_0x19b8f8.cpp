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

// Function: B_FileName_AddPrefix__FPcT0
// Address: 0x19b8f8 - 0x19b9cc
void B_FileName_AddPrefix__FPcT0_0x19b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_FileName_AddPrefix__FPcT0_0x19b8f8");
#endif

    switch (ctx->pc) {
        case 0x19b910u: goto label_19b910;
        case 0x19b948u: goto label_19b948;
        case 0x19b970u: goto label_19b970;
        case 0x19b9a0u: goto label_19b9a0;
        default: break;
    }

    ctx->pc = 0x19b8f8u;

    // 0x19b8f8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19b8f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b8fc: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x19b8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
    // 0x19b900: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b904: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B904u;
    {
        const bool branch_taken_0x19b904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B904u;
        // 0x19b908: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b904) {
            ctx->pc = 0x19B92Cu;
            goto label_19b92c;
        }
    }
    ctx->pc = 0x19B90Cu;
    // 0x19b90c: 0x0  nop
    ctx->pc = 0x19b90cu;
    // NOP
label_19b910:
    // 0x19b910: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x19b910u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b914: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19b918: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b91c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19b91cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b920: 0x0  nop
    ctx->pc = 0x19b920u;
    // NOP
    // 0x19b924: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B924u;
    {
        const bool branch_taken_0x19b924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B924u;
        // 0x19b928: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b924) {
            ctx->pc = 0x19B910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b910;
        }
    }
    ctx->pc = 0x19B92Cu;
label_19b92c:
    // 0x19b92c: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x19b92cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b930: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19b930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b934: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x19b934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b938: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B938u;
    {
        const bool branch_taken_0x19b938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B938u;
        // 0x19b93c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b938) {
            ctx->pc = 0x19B97Cu;
            goto label_19b97c;
        }
    }
    ctx->pc = 0x19B940u;
    // 0x19b940: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b944: 0x0  nop
    ctx->pc = 0x19b944u;
    // NOP
label_19b948:
    // 0x19b948: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19b948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b94c: 0x0  nop
    ctx->pc = 0x19b94cu;
    // NOP
    // 0x19b950: 0x0  nop
    ctx->pc = 0x19b950u;
    // NOP
    // 0x19b954: 0x0  nop
    ctx->pc = 0x19b954u;
    // NOP
    // 0x19b958: 0x0  nop
    ctx->pc = 0x19b958u;
    // NOP
    // 0x19b95c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B95Cu;
    {
        const bool branch_taken_0x19b95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b95c) {
            ctx->pc = 0x19B960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B95Cu;
            // 0x19b960: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b948;
        }
    }
    ctx->pc = 0x19B964u;
    // 0x19b964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19B964u;
    {
        const bool branch_taken_0x19b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B964u;
        // 0x19b968: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b964) {
            ctx->pc = 0x19B980u;
            goto label_19b980;
        }
    }
    ctx->pc = 0x19B96Cu;
    // 0x19b96c: 0x0  nop
    ctx->pc = 0x19b96cu;
    // NOP
label_19b970:
    // 0x19b970: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x19b970u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19b974: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19b97c:
    // 0x19b97c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19b97cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_19b980:
    // 0x19b980: 0x0  nop
    ctx->pc = 0x19b980u;
    // NOP
    // 0x19b984: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B984u;
    {
        const bool branch_taken_0x19b984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B984u;
        // 0x19b988: 0x90660000  lbu         $a2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b984) {
            ctx->pc = 0x19B970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b970;
        }
    }
    ctx->pc = 0x19B98Cu;
    // 0x19b98c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x19b98cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b990: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b994: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x19b994u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b998: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B998u;
    {
        const bool branch_taken_0x19b998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B998u;
        // 0x19b99c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b998) {
            ctx->pc = 0x19B9BCu;
            goto label_19b9bc;
        }
    }
    ctx->pc = 0x19B9A0u;
label_19b9a0:
    // 0x19b9a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x19b9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19b9a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19b9a8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x19b9a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19b9ac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19b9acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b9b0: 0x0  nop
    ctx->pc = 0x19b9b0u;
    // NOP
    // 0x19b9b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B9B4u;
    {
        const bool branch_taken_0x19b9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9B4u;
        // 0x19b9b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9b4) {
            ctx->pc = 0x19B9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b9a0;
        }
    }
    ctx->pc = 0x19B9BCu;
label_19b9bc:
    // 0x19b9bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19b9bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9c0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x19b9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x19B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9C4u;
        // 0x19b9c8: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B9CCu;
}
