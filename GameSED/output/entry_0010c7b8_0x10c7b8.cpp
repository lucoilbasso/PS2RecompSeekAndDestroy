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

// Function: entry_0010c7b8
// Address: 0x10c7b8 - 0x10c828
void entry_0010c7b8_0x10c7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c7b8_0x10c7b8");
#endif

    switch (ctx->pc) {
        case 0x10c7d8u: goto label_10c7d8;
        case 0x10c7e4u: goto label_10c7e4;
        default: break;
    }

    ctx->pc = 0x10c7b8u;

    // 0x10c7b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c7bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c7c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c7c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c7c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c7cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10c7d0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C7D0u;
    SET_GPR_U32(ctx, 31, 0x10C7D8u);
    ctx->pc = 0x10C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C7D0u;
    // 0x10c7d4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C7D0u, 0x10C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7D8u;
label_10c7d8:
    // 0x10c7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c7dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C7DCu;
    SET_GPR_U32(ctx, 31, 0x10C7E4u);
    ctx->pc = 0x10C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C7DCu;
    // 0x10c7e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C7DCu, 0x10C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7E4u;
label_10c7e4:
    // 0x10c7e4: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x10c7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x10c7e8: 0x261001c0  addiu       $s0, $s0, 0x1C0
    ctx->pc = 0x10c7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x10c7ec: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x10c7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x10c7f0: 0xde030038  ld          $v1, 0x38($s0)
    ctx->pc = 0x10c7f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x10c7f4: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x10c7f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10c7f8: 0x96040030  lhu         $a0, 0x30($s0)
    ctx->pc = 0x10c7f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x10c7fc: 0x94c5000c  lhu         $a1, 0xC($a2)
    ctx->pc = 0x10c7fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x10c800: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c808: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x10c808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x10c80c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c810: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x10c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x10c814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c818: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10c818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10c81c: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x10c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x10c820: 0x3e00008  jr          $ra
    ctx->pc = 0x10C820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C820u;
        // 0x10c824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C828u;
}
