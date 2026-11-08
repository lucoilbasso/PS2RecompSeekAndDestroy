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

// Function: MidiCommandPause__9WcMidiStdb
// Address: 0x17c1b8 - 0x17c26c
void MidiCommandPause__9WcMidiStdb_0x17c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MidiCommandPause__9WcMidiStdb_0x17c1b8");
#endif

    switch (ctx->pc) {
        case 0x17c208u: goto label_17c208;
        case 0x17c21cu: goto label_17c21c;
        default: break;
    }

    ctx->pc = 0x17c1b8u;

    // 0x17c1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c1bc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c1c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c1c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c1c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c1cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c1d0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x17c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17c1d4: 0x3401c034  ori         $at, $zero, 0xC034
    ctx->pc = 0x17c1d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17c1d8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x17c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x17c1dc: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x17c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17c1e0: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C1E0u;
    {
        const bool branch_taken_0x17c1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x17C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1E0u;
        // 0x17c1e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1e0) {
            ctx->pc = 0x17C1F0u;
            goto label_17c1f0;
        }
    }
    ctx->pc = 0x17C1E8u;
    // 0x17c1e8: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x17C1E8u;
    {
        const bool branch_taken_0x17c1e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1E8u;
        // 0x17c1ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1e8) {
            ctx->pc = 0x17C25Cu;
            goto label_17c25c;
        }
    }
    ctx->pc = 0x17C1F0u;
label_17c1f0:
    // 0x17c1f0: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x17c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x17c1f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17c1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1f8: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17c1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c1fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c1fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c200: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x17c200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x17c204: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x17c204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_17c208:
    // 0x17c208: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c20c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C20Cu;
    {
        const bool branch_taken_0x17c20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C20Cu;
        // 0x17c210: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c20c) {
            ctx->pc = 0x17C228u;
            goto label_17c228;
        }
    }
    ctx->pc = 0x17C214u;
    // 0x17c214: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C214u;
    SET_GPR_U32(ctx, 31, 0x17C21Cu);
    ctx->pc = 0x17C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C214u;
    // 0x17c218: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C214u, 0x17C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C21Cu;
label_17c21c:
    // 0x17c21c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C21Cu;
    {
        const bool branch_taken_0x17c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C21Cu;
        // 0x17c220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c21c) {
            ctx->pc = 0x17C23Cu;
            goto label_17c23c;
        }
    }
    ctx->pc = 0x17C224u;
    // 0x17c224: 0x0  nop
    ctx->pc = 0x17c224u;
    // NOP
label_17c228:
    // 0x17c228: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17c22c: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17c22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c230: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17C230u;
    {
        const bool branch_taken_0x17c230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C230u;
        // 0x17c234: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c230) {
            ctx->pc = 0x17C208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c208;
        }
    }
    ctx->pc = 0x17C238u;
    // 0x17c238: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c23c:
    // 0x17c23c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c240: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x17c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x17c244: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17c244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x17c248: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x17c248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x17c24c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x17c250: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17c250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x17c254: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17c254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x17c258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c25c:
    // 0x17c25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c264: 0x3e00008  jr          $ra
    ctx->pc = 0x17C264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C264u;
        // 0x17c268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C26Cu;
}
