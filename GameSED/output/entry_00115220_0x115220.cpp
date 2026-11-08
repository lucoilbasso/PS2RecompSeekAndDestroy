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

// Function: entry_00115220
// Address: 0x115220 - 0x115250
void entry_00115220_0x115220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115220_0x115220");
#endif

    switch (ctx->pc) {
        case 0x11522cu: goto label_11522c;
        case 0x11524cu: goto label_11524c;
        default: break;
    }

    ctx->pc = 0x115220u;

    // 0x115220: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115224: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115224u;
    SET_GPR_U32(ctx, 31, 0x11522Cu);
    ctx->pc = 0x115228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115224u;
    // 0x115228: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115224u, 0x11522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11522Cu;
label_11522c:
    // 0x11522c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x11522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x115230: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x115230u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x115234: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x115234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x115238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x115238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11523c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11523Cu;
    {
        const bool branch_taken_0x11523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x115240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11523Cu;
        // 0x115240: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11523c) {
            ctx->pc = 0x115250u;
            return;
        }
    }
    ctx->pc = 0x115244u;
    // 0x115244: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x115244u;
    SET_GPR_U32(ctx, 31, 0x11524Cu);
    ctx->pc = 0x115248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115244u;
    // 0x115248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x115244u, 0x11524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11524Cu;
label_11524c:
    // 0x11524c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x11524cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x115250u;
}
