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

// Function: WPadSoftWareInit__Fi
// Address: 0x177e98 - 0x177f10
void WPadSoftWareInit__Fi_0x177e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadSoftWareInit__Fi_0x177e98");
#endif

    switch (ctx->pc) {
        case 0x177f04u: goto label_177f04;
        default: break;
    }

    ctx->pc = 0x177e98u;

    // 0x177e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177e9c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x177e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x177ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177ea4: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x177ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x177ea8: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x177ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x177eac: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x177eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177eb0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x177eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x177eb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177eb8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x177eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ec0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x177ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x177ec4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x177ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x177ec8: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x177ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x177ecc: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x177eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x177ed0: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x177ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x177ed4: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x177ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x177ed8: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x177ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x177edc: 0xac48001c  sw          $t0, 0x1C($v0)
    ctx->pc = 0x177edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 8));
    // 0x177ee0: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x177ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x177ee4: 0xa0430012  sb          $v1, 0x12($v0)
    ctx->pc = 0x177ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x177ee8: 0xa0430011  sb          $v1, 0x11($v0)
    ctx->pc = 0x177ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x177eec: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x177eecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x177ef0: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x177ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x177ef4: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x177ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x177ef8: 0xa440000a  sh          $zero, 0xA($v0)
    ctx->pc = 0x177ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x177efc: 0xc067294  jal         func_19CA50
    ctx->pc = 0x177EFCu;
    SET_GPR_U32(ctx, 31, 0x177F04u);
    ctx->pc = 0x177F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EFCu;
    // 0x177f00: 0xa4400008  sh          $zero, 0x8($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x177EFCu, 0x177F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F04u;
label_177f04:
    // 0x177f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f08: 0x3e00008  jr          $ra
    ctx->pc = 0x177F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F08u;
        // 0x177f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177F10u;
}
