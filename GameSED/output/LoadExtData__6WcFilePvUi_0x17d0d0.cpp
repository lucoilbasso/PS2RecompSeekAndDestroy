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

// Function: LoadExtData__6WcFilePvUi
// Address: 0x17d0d0 - 0x17d148
void LoadExtData__6WcFilePvUi_0x17d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadExtData__6WcFilePvUi_0x17d0d0");
#endif

    switch (ctx->pc) {
        case 0x17d0d0u: goto label_17d0d0;
        case 0x17d0d4u: goto label_17d0d4;
        case 0x17d0d8u: goto label_17d0d8;
        case 0x17d0dcu: goto label_17d0dc;
        case 0x17d0e0u: goto label_17d0e0;
        case 0x17d0e4u: goto label_17d0e4;
        case 0x17d0e8u: goto label_17d0e8;
        case 0x17d0ecu: goto label_17d0ec;
        case 0x17d0f0u: goto label_17d0f0;
        case 0x17d0f4u: goto label_17d0f4;
        case 0x17d0f8u: goto label_17d0f8;
        case 0x17d0fcu: goto label_17d0fc;
        case 0x17d100u: goto label_17d100;
        case 0x17d104u: goto label_17d104;
        case 0x17d108u: goto label_17d108;
        case 0x17d10cu: goto label_17d10c;
        case 0x17d110u: goto label_17d110;
        case 0x17d114u: goto label_17d114;
        case 0x17d118u: goto label_17d118;
        case 0x17d11cu: goto label_17d11c;
        case 0x17d120u: goto label_17d120;
        case 0x17d124u: goto label_17d124;
        case 0x17d128u: goto label_17d128;
        case 0x17d12cu: goto label_17d12c;
        case 0x17d130u: goto label_17d130;
        case 0x17d134u: goto label_17d134;
        case 0x17d138u: goto label_17d138;
        case 0x17d13cu: goto label_17d13c;
        case 0x17d140u: goto label_17d140;
        case 0x17d144u: goto label_17d144;
        default: break;
    }

    ctx->pc = 0x17d0d0u;

label_17d0d0:
    // 0x17d0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17d0d4:
    // 0x17d0d4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x17d0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d0d8:
    // 0x17d0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17d0dc:
    // 0x17d0dc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x17d0dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17d0e0:
    // 0x17d0e0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x17d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_17d0e4:
    // 0x17d0e4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_17d0e8:
    if (ctx->pc == 0x17D0E8u) {
        ctx->pc = 0x17D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0E4u;
        // 0x17d0e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D0ECu;
        goto label_17d0ec;
    }
    ctx->pc = 0x17D0E4u;
    {
        const bool branch_taken_0x17d0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0E4u;
        // 0x17d0e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0e4) {
            ctx->pc = 0x17D130u;
            goto label_17d130;
        }
    }
    ctx->pc = 0x17D0ECu;
label_17d0ec:
    // 0x17d0ec: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x17d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_17d0f0:
    // 0x17d0f0: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_17d0f4:
    // 0x17d0f4: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x17d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_17d0f8:
    // 0x17d0f8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x17d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_17d0fc:
    // 0x17d0fc: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x17d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
label_17d100:
    // 0x17d100: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x17d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_17d104:
    // 0x17d104: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x17d104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_17d108:
    // 0x17d108: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x17d108u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
label_17d10c:
    // 0x17d10c: 0xace80014  sw          $t0, 0x14($a3)
    ctx->pc = 0x17d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 8));
label_17d110:
    // 0x17d110: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x17d110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_17d114:
    // 0x17d114: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x17d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17d118:
    // 0x17d118: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x17d118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_17d11c:
    // 0x17d11c: 0x40f809  jalr        $v0
label_17d120:
    if (ctx->pc == 0x17D120u) {
        ctx->pc = 0x17D124u;
        goto label_17d124;
    }
    ctx->pc = 0x17D11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D124u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D11Cu, 0x17D124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D124u;
label_17d124:
    // 0x17d124: 0x10000006  b           . + 4 + (0x6 << 2)
label_17d128:
    if (ctx->pc == 0x17D128u) {
        ctx->pc = 0x17D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D124u;
        // 0x17d128: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D12Cu;
        goto label_17d12c;
    }
    ctx->pc = 0x17D124u;
    {
        const bool branch_taken_0x17d124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D124u;
        // 0x17d128: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d124) {
            ctx->pc = 0x17D140u;
            goto label_17d140;
        }
    }
    ctx->pc = 0x17D12Cu;
label_17d12c:
    // 0x17d12c: 0x0  nop
    ctx->pc = 0x17d12cu;
    // NOP
label_17d130:
    // 0x17d130: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_17d134:
    // 0x17d134: 0xc068186  jal         func_1A0618
label_17d138:
    if (ctx->pc == 0x17D138u) {
        ctx->pc = 0x17D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D134u;
        // 0x17d138: 0x24a57ba8  addiu       $a1, $a1, 0x7BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D13Cu;
        goto label_17d13c;
    }
    ctx->pc = 0x17D134u;
    SET_GPR_U32(ctx, 31, 0x17D13Cu);
    ctx->pc = 0x17D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D134u;
    // 0x17d138: 0x24a57ba8  addiu       $a1, $a1, 0x7BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D134u, 0x17D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D13Cu;
label_17d13c:
    // 0x17d13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d140:
    // 0x17d140: 0x3e00008  jr          $ra
label_17d144:
    if (ctx->pc == 0x17D144u) {
        ctx->pc = 0x17D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D140u;
        // 0x17d144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D148u;
        goto label_fallthrough_0x17d140;
    }
    ctx->pc = 0x17D140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D140u;
        // 0x17d144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17d140:
    ctx->pc = 0x17D148u;
}
