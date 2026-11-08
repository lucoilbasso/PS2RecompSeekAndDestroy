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

// Function: entry_00172158
// Address: 0x172158 - 0x172240
void entry_00172158_0x172158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172158_0x172158");
#endif

    switch (ctx->pc) {
        case 0x172160u: goto label_172160;
        case 0x172188u: goto label_172188;
        case 0x172194u: goto label_172194;
        case 0x1721a4u: goto label_1721a4;
        case 0x1721b4u: goto label_1721b4;
        case 0x1721c0u: goto label_1721c0;
        case 0x1721d0u: goto label_1721d0;
        case 0x17221cu: goto label_17221c;
        default: break;
    }

    ctx->pc = 0x172158u;

    // 0x172158: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172158u;
    SET_GPR_U32(ctx, 31, 0x172160u);
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172158u, 0x172160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172160u;
label_172160:
    // 0x172160: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x172160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172164: 0x1511c0  sll         $v0, $s5, 7
    ctx->pc = 0x172164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x172168: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x172168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x17216c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17216cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172170: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x172170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x172174: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172178: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x17217c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172180: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x172180u;
    SET_GPR_U32(ctx, 31, 0x172188u);
    ctx->pc = 0x172184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172180u;
    // 0x172184: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x172180u, 0x172188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172188u;
label_172188:
    // 0x172188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17218c: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x17218Cu;
    SET_GPR_U32(ctx, 31, 0x172194u);
    ctx->pc = 0x172190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17218Cu;
    // 0x172190: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x17218Cu, 0x172194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172194u;
label_172194:
    // 0x172194: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x172194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x172198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17219c: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x17219Cu;
    SET_GPR_U32(ctx, 31, 0x1721A4u);
    ctx->pc = 0x1721A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17219Cu;
    // 0x1721a0: 0x522823  subu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x17219Cu, 0x1721A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721A4u;
label_1721a4:
    // 0x1721a4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1721a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1721a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1721a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721ac: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1721ACu;
    SET_GPR_U32(ctx, 31, 0x1721B4u);
    ctx->pc = 0x1721B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721ACu;
    // 0x1721b0: 0x712823  subu        $a1, $v1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1721ACu, 0x1721B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721B4u;
label_1721b4:
    // 0x1721b4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1721b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1721b8: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1721B8u;
    SET_GPR_U32(ctx, 31, 0x1721C0u);
    ctx->pc = 0x1721BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721B8u;
    // 0x1721bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1721B8u, 0x1721C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721C0u;
label_1721c0:
    // 0x1721c0: 0x3c05bcbc  lui         $a1, 0xBCBC
    ctx->pc = 0x1721c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48316 << 16));
    // 0x1721c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1721c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721c8: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x1721C8u;
    SET_GPR_U32(ctx, 31, 0x1721D0u);
    ctx->pc = 0x1721CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721C8u;
    // 0x1721cc: 0x34a5bcbc  ori         $a1, $a1, 0xBCBC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48316);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x1721C8u, 0x1721D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721D0u;
label_1721d0:
    // 0x1721d0: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x1721d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x1721d4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x1721d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x1721d8: 0x2403010f  addiu       $v1, $zero, 0x10F
    ctx->pc = 0x1721d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x1721dc: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x1721dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x1721e0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1721e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1721e4: 0x3c41021  addu        $v0, $fp, $a0
    ctx->pc = 0x1721e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1721e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1721e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721ec: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1721ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1721f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1721f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721f4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1721f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1721f8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1721f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1721fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1721fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x172200: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x172200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x172204: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x172204u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x172208: 0x2852824  and         $a1, $s4, $a1
    ctx->pc = 0x172208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x17220c: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x17220cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x172210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172214: 0xc06bb06  jal         func_1AEC18
    ctx->pc = 0x172214u;
    SET_GPR_U32(ctx, 31, 0x17221Cu);
    ctx->pc = 0x172218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172214u;
    // 0x172218: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC18u, 0x172214u, 0x17221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17221Cu;
label_17221c:
    // 0x17221c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x17221cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172220: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x172220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x172224: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x172224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172228u;
    {
        const bool branch_taken_0x172228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172228u;
        // 0x17222c: 0x2404fff9  addiu       $a0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172228) {
            ctx->pc = 0x172240u;
            return;
        }
    }
    ctx->pc = 0x172230u;
    // 0x172230: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x172230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x172234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172234u;
    {
        const bool branch_taken_0x172234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172234u;
        // 0x172238: 0x8fb20058  lw          $s2, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172234) {
            ctx->pc = 0x172248u;
            return;
        }
    }
    ctx->pc = 0x17223Cu;
    // 0x17223c: 0x0  nop
    ctx->pc = 0x17223cu;
    // NOP
    ctx->pc = 0x172240u;
}
