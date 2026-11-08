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

// Function: entry_0018dd18
// Address: 0x18dd18 - 0x18dd58
void entry_0018dd18_0x18dd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd18_0x18dd18");
#endif

    switch (ctx->pc) {
        case 0x18dd30u: goto label_18dd30;
        case 0x18dd54u: goto label_18dd54;
        default: break;
    }

    ctx->pc = 0x18dd18u;

    // 0x18dd18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dd1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd20: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x18dd20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18dd24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd28: 0xc06343e  jal         func_18D0F8
    ctx->pc = 0x18DD28u;
    SET_GPR_U32(ctx, 31, 0x18DD30u);
    ctx->pc = 0x18DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD28u;
    // 0x18dd2c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D0F8u, 0x18DD28u, 0x18DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD30u;
label_18dd30:
    // 0x18dd30: 0x26030260  addiu       $v1, $s0, 0x260
    ctx->pc = 0x18dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x18dd34: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x18dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x18dd38: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DD38u;
    {
        const bool branch_taken_0x18dd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18dd38) {
            ctx->pc = 0x18DD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DD38u;
            // 0x18dd3c: 0x8e03025c  lw          $v1, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DD58u;
            return;
        }
    }
    ctx->pc = 0x18DD40u;
    // 0x18dd40: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18dd44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd48: 0x24a58130  addiu       $a1, $a1, -0x7ED0
    ctx->pc = 0x18dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934832));
    // 0x18dd4c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18DD4Cu;
    SET_GPR_U32(ctx, 31, 0x18DD54u);
    ctx->pc = 0x18DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD4Cu;
    // 0x18dd50: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18DD4Cu, 0x18DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD54u;
label_18dd54:
    // 0x18dd54: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x18dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    ctx->pc = 0x18dd58u;
}
