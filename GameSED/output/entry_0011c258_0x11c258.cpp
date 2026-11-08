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

// Function: entry_0011c258
// Address: 0x11c258 - 0x11c2b4
void entry_0011c258_0x11c258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c258_0x11c258");
#endif

    ctx->pc = 0x11c258u;

label_11c258:
    // 0x11c258: 0x2e51021  addu        $v0, $s7, $a1
    ctx->pc = 0x11c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x11c25c: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x11c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x11c260: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x11c260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c264: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11c264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11c268: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x11c268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11c26c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C26Cu;
    {
        const bool branch_taken_0x11c26c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C26Cu;
        // 0x11c270: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c26c) {
            ctx->pc = 0x11C258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c258;
        }
    }
    ctx->pc = 0x11C274u;
    // 0x11c274: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11c274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11c278: 0x2902006e  slti        $v0, $t0, 0x6E
    ctx->pc = 0x11c278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x11c27c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C27Cu;
    {
        const bool branch_taken_0x11c27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C27Cu;
        // 0x11c280: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c27c) {
            ctx->pc = 0x11C250u;
            return;
        }
    }
    ctx->pc = 0x11C284u;
    // 0x11c284: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c288: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11c288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c28c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11c28cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c290: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11c290u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11c294: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11c294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c298: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11c298u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11c29c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x11c29cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c2a0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x11c2a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11c2a4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x11c2a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c2a8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x11c2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11c2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11C2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2ACu;
        // 0x11c2b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C2B4u;
}
