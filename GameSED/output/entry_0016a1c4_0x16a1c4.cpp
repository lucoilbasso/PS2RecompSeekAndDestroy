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

// Function: entry_0016a1c4
// Address: 0x16a1c4 - 0x16a258
void entry_0016a1c4_0x16a1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a1c4_0x16a1c4");
#endif

    switch (ctx->pc) {
        case 0x16a1f8u: goto label_16a1f8;
        case 0x16a218u: goto label_16a218;
        case 0x16a238u: goto label_16a238;
        default: break;
    }

    ctx->pc = 0x16a1c4u;

    // 0x16a1c4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x16a1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16a1c8: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x16a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x16a1cc: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x16a1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x16a1d0: 0x8c45038c  lw          $a1, 0x38C($v0)
    ctx->pc = 0x16a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    // 0x16a1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1d8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a1dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16a1dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1e0: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x16a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x16a1e4: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x16a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x16a1e8: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16a1ec: 0xafbd0058  sw          $sp, 0x58($sp)
    ctx->pc = 0x16a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 29));
    // 0x16a1f0: 0xc060e24  jal         func_183890
    ctx->pc = 0x16A1F0u;
    SET_GPR_U32(ctx, 31, 0x16A1F8u);
    ctx->pc = 0x16A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1F0u;
    // 0x16a1f4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183890u, 0x16A1F0u, 0x16A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1F8u;
label_16a1f8:
    // 0x16a1f8: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x16a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x16a1fc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x16a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16a200: 0x2463b0a0  addiu       $v1, $v1, -0x4F60
    ctx->pc = 0x16a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946976));
    // 0x16a204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a208: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x16a208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x16a20c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x16a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x16a210: 0xc069626  jal         func_1A5898
    ctx->pc = 0x16A210u;
    SET_GPR_U32(ctx, 31, 0x16A218u);
    ctx->pc = 0x16A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A210u;
    // 0x16a214: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x16A210u, 0x16A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A218u;
label_16a218:
    // 0x16a218: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x16a218u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a21c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a220: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16a224: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16a224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a228: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x16a228u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a22c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16a22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a230: 0xc05a664  jal         func_169990
    ctx->pc = 0x16A230u;
    SET_GPR_U32(ctx, 31, 0x16A238u);
    ctx->pc = 0x16A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A230u;
    // 0x16a234: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169990u, 0x16A230u, 0x16A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A238u;
label_16a238:
    // 0x16a238: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x16a238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a23c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x16a23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16a240: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x16a240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a244: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x16a244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16a248: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x16a248u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a24c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x16a24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16a250: 0x3e00008  jr          $ra
    ctx->pc = 0x16A250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A250u;
        // 0x16a254: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A258u;
}
