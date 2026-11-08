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

// Function: B_FileName_CompSuffix__FPcT0
// Address: 0x19b9d0 - 0x19ba80
void B_FileName_CompSuffix__FPcT0_0x19b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_FileName_CompSuffix__FPcT0_0x19b9d0");
#endif

    switch (ctx->pc) {
        case 0x19b9e8u: goto label_19b9e8;
        case 0x19ba18u: goto label_19ba18;
        default: break;
    }

    ctx->pc = 0x19b9d0u;

    // 0x19b9d0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x19b9d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b9d4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19B9D4u;
    {
        const bool branch_taken_0x19b9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9D4u;
        // 0x19b9d8: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9d4) {
            ctx->pc = 0x19BA1Cu;
            goto label_19ba1c;
        }
    }
    ctx->pc = 0x19B9DCu;
    // 0x19b9dc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19B9DCu;
    {
        const bool branch_taken_0x19b9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9DCu;
        // 0x19b9e0: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9dc) {
            ctx->pc = 0x19BA1Cu;
            goto label_19ba1c;
        }
    }
    ctx->pc = 0x19B9E4u;
    // 0x19b9e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19b9e8:
    // 0x19b9e8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19b9e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b9ec: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19B9ECu;
    {
        const bool branch_taken_0x19b9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9ec) {
            ctx->pc = 0x19B9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B9ECu;
            // 0x19b9f0: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA20u;
            goto label_19ba20;
        }
    }
    ctx->pc = 0x19B9F4u;
    // 0x19b9f4: 0x0  nop
    ctx->pc = 0x19b9f4u;
    // NOP
    // 0x19b9f8: 0x0  nop
    ctx->pc = 0x19b9f8u;
    // NOP
    // 0x19b9fc: 0x0  nop
    ctx->pc = 0x19b9fcu;
    // NOP
    // 0x19ba00: 0x0  nop
    ctx->pc = 0x19ba00u;
    // NOP
    // 0x19ba04: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19BA04u;
    {
        const bool branch_taken_0x19ba04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19ba04) {
            ctx->pc = 0x19BA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BA04u;
            // 0x19ba08: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b9e8;
        }
    }
    ctx->pc = 0x19BA0Cu;
    // 0x19ba0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19BA0Cu;
    {
        const bool branch_taken_0x19ba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA0Cu;
        // 0x19ba10: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba0c) {
            ctx->pc = 0x19BA20u;
            goto label_19ba20;
        }
    }
    ctx->pc = 0x19BA14u;
    // 0x19ba14: 0x0  nop
    ctx->pc = 0x19ba14u;
    // NOP
label_19ba18:
    // 0x19ba18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19ba18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19ba1c:
    // 0x19ba1c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19ba1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19ba20:
    // 0x19ba20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19BA20u;
    {
        const bool branch_taken_0x19ba20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA20u;
        // 0x19ba24: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba20) {
            ctx->pc = 0x19BA64u;
            goto label_19ba64;
        }
    }
    ctx->pc = 0x19BA28u;
    // 0x19ba28: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x19ba28u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ba2c: 0x24e2ff9f  addiu       $v0, $a3, -0x61
    ctx->pc = 0x19ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
    // 0x19ba30: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19ba30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19ba34: 0x24c3ff9f  addiu       $v1, $a2, -0x61
    ctx->pc = 0x19ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967199));
    // 0x19ba38: 0x24c8ffe0  addiu       $t0, $a2, -0x20
    ctx->pc = 0x19ba38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x19ba3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BA3Cu;
    {
        const bool branch_taken_0x19ba3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA3Cu;
        // 0x19ba40: 0x2c63001a  sltiu       $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba3c) {
            ctx->pc = 0x19BA50u;
            goto label_19ba50;
        }
    }
    ctx->pc = 0x19BA44u;
    // 0x19ba44: 0x24e2ffe0  addiu       $v0, $a3, -0x20
    ctx->pc = 0x19ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x19ba48: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19ba4c: 0x23e03  sra         $a3, $v0, 24
    ctx->pc = 0x19ba4cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
label_19ba50:
    // 0x19ba50: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BA50u;
    {
        const bool branch_taken_0x19ba50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA50u;
        // 0x19ba54: 0x81600  sll         $v0, $t0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba50) {
            ctx->pc = 0x19BA5Cu;
            goto label_19ba5c;
        }
    }
    ctx->pc = 0x19BA58u;
    // 0x19ba58: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_19ba5c:
    // 0x19ba5c: 0x50c7ffee  beql        $a2, $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19BA5Cu;
    {
        const bool branch_taken_0x19ba5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x19ba5c) {
            ctx->pc = 0x19BA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BA5Cu;
            // 0x19ba60: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ba18;
        }
    }
    ctx->pc = 0x19BA64u;
label_19ba64:
    // 0x19ba64: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19ba64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ba68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BA68u;
    {
        const bool branch_taken_0x19ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA68u;
        // 0x19ba6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba68) {
            ctx->pc = 0x19BA78u;
            goto label_19ba78;
        }
    }
    ctx->pc = 0x19BA70u;
    // 0x19ba70: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19ba70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ba74: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x19ba74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19ba78:
    // 0x19ba78: 0x3e00008  jr          $ra
    ctx->pc = 0x19BA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA78u;
        // 0x19ba7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BA80u;
}
