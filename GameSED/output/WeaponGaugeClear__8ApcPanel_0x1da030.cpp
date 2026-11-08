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

// Function: WeaponGaugeClear__8ApcPanel
// Address: 0x1da030 - 0x1da0bc
void WeaponGaugeClear__8ApcPanel_0x1da030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WeaponGaugeClear__8ApcPanel_0x1da030");
#endif

    ctx->pc = 0x1da030u;

    // 0x1da030: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x1da030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1da034: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x1da034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1da038: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1da038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1da03c: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1da03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1da040: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1da040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1da044: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1da044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1da048: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1da048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1da04c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1da04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1da050: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1da050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1da054: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1da054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1da058: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1da058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1da05c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1da05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1da060: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1da060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1da064: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1da064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1da068: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1da068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1da06c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1da06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1da070: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1da070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1da074: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1da074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1da078: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1da078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1da07c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1da07cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1da080: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1da080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1da084: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1da084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1da088: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1da088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1da08c: 0xac80016c  sw          $zero, 0x16C($a0)
    ctx->pc = 0x1da08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 364), GPR_U32(ctx, 0));
    // 0x1da090: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1da090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1da094: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x1da094u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1da098: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x1da098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1da09c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1da09cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1da0a0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1da0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1da0a4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x1da0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1da0a8: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x1da0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x1da0ac: 0xac800160  sw          $zero, 0x160($a0)
    ctx->pc = 0x1da0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 0));
    // 0x1da0b0: 0xac800164  sw          $zero, 0x164($a0)
    ctx->pc = 0x1da0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 0));
    // 0x1da0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0B4u;
        // 0x1da0b8: 0xac800168  sw          $zero, 0x168($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA0BCu;
}
