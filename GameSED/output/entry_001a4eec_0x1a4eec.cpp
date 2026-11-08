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

// Function: entry_001a4eec
// Address: 0x1a4eec - 0x1a4f18
void entry_001a4eec_0x1a4eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4eec_0x1a4eec");
#endif

    switch (ctx->pc) {
        case 0x1a4ef8u: goto label_1a4ef8;
        default: break;
    }

    ctx->pc = 0x1a4eecu;

    // 0x1a4eec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4ef0: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A4EF0u;
    SET_GPR_U32(ctx, 31, 0x1A4EF8u);
    ctx->pc = 0x1A4EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EF0u;
    // 0x1a4ef4: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4EF0u, 0x1A4EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EF8u;
label_1a4ef8:
    // 0x1a4ef8: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1a4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1a4efc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1a4efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a4f00: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1a4f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1a4f04: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1a4f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a4f08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a4f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f0c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a4f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1a4f10: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4F10u;
    {
        const bool branch_taken_0x1a4f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F10u;
        // 0x1a4f14: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f10) {
            ctx->pc = 0x1A4F24u;
            return;
        }
    }
    ctx->pc = 0x1A4F18u;
}
