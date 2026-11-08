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

// Function: save_Screen_BMP__FPc
// Address: 0x1050d0 - 0x1052d4
void save_Screen_BMP__FPc_0x1050d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("save_Screen_BMP__FPc_0x1050d0");
#endif

    switch (ctx->pc) {
        case 0x105110u: goto label_105110;
        case 0x105128u: goto label_105128;
        case 0x105140u: goto label_105140;
        case 0x105164u: goto label_105164;
        case 0x105178u: goto label_105178;
        case 0x105188u: goto label_105188;
        case 0x105194u: goto label_105194;
        case 0x1051acu: goto label_1051ac;
        case 0x10520cu: goto label_10520c;
        case 0x105264u: goto label_105264;
        case 0x105268u: goto label_105268;
        case 0x10527cu: goto label_10527c;
        case 0x10528cu: goto label_10528c;
        case 0x10529cu: goto label_10529c;
        case 0x1052a8u: goto label_1052a8;
        case 0x1052b4u: goto label_1052b4;
        default: break;
    }

    ctx->pc = 0x1050d0u;

    // 0x1050d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1050d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1050d4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1050d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1050d8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1050d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1050dc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1050dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1050e0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1050e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1050e4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1050e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1050e8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1050e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1050ec: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1050ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1050f0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1050f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1050f4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1050f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1050f8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1050f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1050fc: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x1050FCu;
    {
        const bool branch_taken_0x1050fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050FCu;
        // 0x105100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050fc) {
            ctx->pc = 0x1052B4u;
            goto label_1052b4;
        }
    }
    ctx->pc = 0x105104u;
    // 0x105104: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x105104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x105108: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x105108u;
    SET_GPR_U32(ctx, 31, 0x105110u);
    ctx->pc = 0x10510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105108u;
    // 0x10510c: 0x248438c0  addiu       $a0, $a0, 0x38C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x105108u, 0x105110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105110u;
label_105110:
    // 0x105110: 0x8f948d10  lw          $s4, -0x72F0($gp)
    ctx->pc = 0x105110u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105114: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x105114u;
    {
        const bool branch_taken_0x105114 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x105118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105114u;
        // 0x105118: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105114) {
            ctx->pc = 0x105120u;
            goto label_105120;
        }
    }
    ctx->pc = 0x10511Cu;
    // 0x10511c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x10511cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_105120:
    // 0x105120: 0xc068086  jal         func_1A0218
    ctx->pc = 0x105120u;
    SET_GPR_U32(ctx, 31, 0x105128u);
    ctx->pc = 0x105124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105120u;
    // 0x105124: 0x3c05000e  lui         $a1, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x105120u, 0x105128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105128u;
label_105128:
    // 0x105128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10512c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x10512cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x105130: 0xaf8288a8  sw          $v0, -0x7758($gp)
    ctx->pc = 0x105130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936744), GPR_U32(ctx, 2));
    // 0x105134: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x105134u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x105138: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x105138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x10513c: 0x0  nop
    ctx->pc = 0x10513cu;
    // NOP
label_105140:
    // 0x105140: 0x8f8288a8  lw          $v0, -0x7758($gp)
    ctx->pc = 0x105140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    // 0x105144: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x105144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x105148: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x105148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10514c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105150: 0xc5202a  slt         $a0, $a2, $a1
    ctx->pc = 0x105150u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x105154: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105154u;
    {
        const bool branch_taken_0x105154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x105158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105154u;
        // 0x105158: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105154) {
            ctx->pc = 0x105140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105140;
        }
    }
    ctx->pc = 0x10515Cu;
    // 0x10515c: 0xc0413e2  jal         func_104F88
    ctx->pc = 0x10515Cu;
    SET_GPR_U32(ctx, 31, 0x105164u);
    ctx->pc = 0x104F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F88u, 0x10515Cu, 0x105164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105164u;
label_105164:
    // 0x105164: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x105164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x105168: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10516c: 0x24c6d120  addiu       $a2, $a2, -0x2EE0
    ctx->pc = 0x10516cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955296));
    // 0x105170: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x105170u;
    SET_GPR_U32(ctx, 31, 0x105178u);
    ctx->pc = 0x105174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105170u;
    // 0x105174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x105170u, 0x105178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105178u;
label_105178:
    // 0x105178: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x105178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10517c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10517cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105180: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x105180u;
    SET_GPR_U32(ctx, 31, 0x105188u);
    ctx->pc = 0x105184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105180u;
    // 0x105184: 0x248438d0  addiu       $a0, $a0, 0x38D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x105180u, 0x105188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105188u;
label_105188:
    // 0x105188: 0x24050602  addiu       $a1, $zero, 0x602
    ctx->pc = 0x105188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
    // 0x10518c: 0xc06ca22  jal         func_1B2888
    ctx->pc = 0x10518Cu;
    SET_GPR_U32(ctx, 31, 0x105194u);
    ctx->pc = 0x105190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10518Cu;
    // 0x105190: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2888u, 0x10518Cu, 0x105194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105194u;
label_105194:
    // 0x105194: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x105194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105198: 0x6410007  bgez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x105198u;
    {
        const bool branch_taken_0x105198 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105198u;
        // 0x10519c: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105198) {
            ctx->pc = 0x1051B8u;
            goto label_1051b8;
        }
    }
    ctx->pc = 0x1051A0u;
    // 0x1051a0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1051a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1051a4: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1051A4u;
    SET_GPR_U32(ctx, 31, 0x1051ACu);
    ctx->pc = 0x1051A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1051A4u;
    // 0x1051a8: 0x2484d128  addiu       $a0, $a0, -0x2ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1051A4u, 0x1051ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051ACu;
label_1051ac:
    // 0x1051ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1051ACu;
    {
        const bool branch_taken_0x1051ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051ACu;
        // 0x1051b0: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051ac) {
            ctx->pc = 0x1052A0u;
            goto label_1052a0;
        }
    }
    ctx->pc = 0x1051B4u;
    // 0x1051b4: 0x0  nop
    ctx->pc = 0x1051b4u;
    // NOP
label_1051b8:
    // 0x1051b8: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1051b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1051bc: 0x2442bf88  addiu       $v0, $v0, -0x4078
    ctx->pc = 0x1051bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950792));
    // 0x1051c0: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x1051c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1051c4: 0x24088036  addiu       $t0, $zero, -0x7FCA
    ctx->pc = 0x1051c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934582));
    // 0x1051c8: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x1051c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1051cc: 0x240a0036  addiu       $t2, $zero, 0x36
    ctx->pc = 0x1051ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1051d0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1051d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1051d4: 0xa0470001  sb          $a3, 0x1($v0)
    ctx->pc = 0x1051d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1051d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1051d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051dc: 0xa4480002  sh          $t0, 0x2($v0)
    ctx->pc = 0x1051dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1051e0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1051e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1051e4: 0xa4490004  sh          $t1, 0x4($v0)
    ctx->pc = 0x1051e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x1051e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1051e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051ec: 0xa44a000a  sh          $t2, 0xA($v0)
    ctx->pc = 0x1051ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 10));
    // 0x1051f0: 0x3c11000d  lui         $s1, 0xD
    ctx->pc = 0x1051f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)13 << 16));
    // 0x1051f4: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x1051f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1051f8: 0x3631f800  ori         $s1, $s1, 0xF800
    ctx->pc = 0x1051f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)63488);
    // 0x1051fc: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x1051fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x105200: 0x241301bf  addiu       $s3, $zero, 0x1BF
    ctx->pc = 0x105200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    // 0x105204: 0xc06cc4a  jal         func_1B3128
    ctx->pc = 0x105204u;
    SET_GPR_U32(ctx, 31, 0x10520Cu);
    ctx->pc = 0x105208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105204u;
    // 0x105208: 0xa440000c  sh          $zero, 0xC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3128u, 0x105204u, 0x10520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10520Cu;
label_10520c:
    // 0x10520c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x10520cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x105210: 0x2463bf98  addiu       $v1, $v1, -0x4068
    ctx->pc = 0x105210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950808));
    // 0x105214: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x105214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x105218: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x105218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x10521c: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x10521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x105220: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x105220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105224: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x105224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x105228: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x105228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1EBF98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBF98u, _value); } while (0);
    // 0x10522c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10522cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105230: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x105230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1EBF9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBF9Cu, _value); } while (0);
    // 0x105234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105238: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x105238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1EBFA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFA0u, _value); } while (0);
    // 0x10523c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x10523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x105240: 0xa467000c  sh          $a3, 0xC($v1)
    ctx->pc = 0x105240u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1EBFA4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1EBFA4u, _value); } while (0);
    // 0x105244: 0xa468000e  sh          $t0, 0xE($v1)
    ctx->pc = 0x105244u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1EBFA6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1EBFA6u, _value); } while (0);
    // 0x105248: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x105248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFA8u, _value); } while (0);
    // 0x10524c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x10524cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFACu, _value); } while (0);
    // 0x105250: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x105250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFB0u, _value); } while (0);
    // 0x105254: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x105254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFB4u, _value); } while (0);
    // 0x105258: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x105258u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EBFB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBFB8u, _value); } while (0);
    // 0x10525c: 0xc06cc4a  jal         func_1B3128
    ctx->pc = 0x10525Cu;
    SET_GPR_U32(ctx, 31, 0x105264u);
    ctx->pc = 0x105260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10525Cu;
    // 0x105260: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3128u, 0x10525Cu, 0x105264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105264u;
label_105264:
    // 0x105264: 0x8f9088a8  lw          $s0, -0x7758($gp)
    ctx->pc = 0x105264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
label_105268:
    // 0x105268: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x105268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x10526c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x10526cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x105270: 0x2631f800  addiu       $s1, $s1, -0x800
    ctx->pc = 0x105270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965248));
    // 0x105274: 0xc041b1c  jal         func_106C70
    ctx->pc = 0x105274u;
    SET_GPR_U32(ctx, 31, 0x10527Cu);
    ctx->pc = 0x105278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105274u;
    // 0x105278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C70u, 0x105274u, 0x10527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10527Cu;
label_10527c:
    // 0x10527c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105284: 0xc06cc4a  jal         func_1B3128
    ctx->pc = 0x105284u;
    SET_GPR_U32(ctx, 31, 0x10528Cu);
    ctx->pc = 0x105288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105284u;
    // 0x105288: 0x24060600  addiu       $a2, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3128u, 0x105284u, 0x10528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10528Cu;
label_10528c:
    // 0x10528c: 0x663fff6  bgezl       $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x10528Cu;
    {
        const bool branch_taken_0x10528c = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x10528c) {
            ctx->pc = 0x105290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10528Cu;
            // 0x105290: 0x8f9088a8  lw          $s0, -0x7758($gp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105268;
        }
    }
    ctx->pc = 0x105294u;
    // 0x105294: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x105294u;
    SET_GPR_U32(ctx, 31, 0x10529Cu);
    ctx->pc = 0x105298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105294u;
    // 0x105298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x105294u, 0x10529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10529Cu;
label_10529c:
    // 0x10529c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10529cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_1052a0:
    // 0x1052a0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1052A0u;
    SET_GPR_U32(ctx, 31, 0x1052A8u);
    ctx->pc = 0x1052A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1052A0u;
    // 0x1052a4: 0x2484d130  addiu       $a0, $a0, -0x2ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1052A0u, 0x1052A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1052A8u;
label_1052a8:
    // 0x1052a8: 0x8f8488a8  lw          $a0, -0x7758($gp)
    ctx->pc = 0x1052a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    // 0x1052ac: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1052ACu;
    SET_GPR_U32(ctx, 31, 0x1052B4u);
    ctx->pc = 0x1052B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1052ACu;
    // 0x1052b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1052ACu, 0x1052B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1052B4u;
label_1052b4:
    // 0x1052b4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1052b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1052b8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1052b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1052bc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1052bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1052c0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1052c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1052c4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1052c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1052c8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1052c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1052cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1052CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1052D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052CCu;
        // 0x1052d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1052CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1052D4u;
}
