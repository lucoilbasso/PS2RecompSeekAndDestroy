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

// Function: sceDevFontRefDirectImage
// Address: 0x1ae0f8 - 0x1ae280
void sceDevFontRefDirectImage_0x1ae0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontRefDirectImage_0x1ae0f8");
#endif

    switch (ctx->pc) {
        case 0x1ae170u: goto label_1ae170;
        case 0x1ae1a4u: goto label_1ae1a4;
        case 0x1ae1b0u: goto label_1ae1b0;
        case 0x1ae1bcu: goto label_1ae1bc;
        case 0x1ae1c8u: goto label_1ae1c8;
        case 0x1ae1d4u: goto label_1ae1d4;
        case 0x1ae1e0u: goto label_1ae1e0;
        case 0x1ae1ecu: goto label_1ae1ec;
        case 0x1ae1f8u: goto label_1ae1f8;
        case 0x1ae204u: goto label_1ae204;
        case 0x1ae210u: goto label_1ae210;
        case 0x1ae21cu: goto label_1ae21c;
        case 0x1ae228u: goto label_1ae228;
        case 0x1ae234u: goto label_1ae234;
        case 0x1ae23cu: goto label_1ae23c;
        default: break;
    }

    ctx->pc = 0x1ae0f8u;

    // 0x1ae0f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ae0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ae0fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ae0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ae100: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ae100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ae104: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1ae104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae10c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ae10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae110: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ae110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ae114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae118: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1ae118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1ae11c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1ae11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1ae120: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1ae120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1ae124: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1ae124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1ae128: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ae128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ae12c: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x1AE12Cu;
    {
        const bool branch_taken_0x1ae12c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE12Cu;
        // 0x1ae130: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae12c) {
            ctx->pc = 0x1AE250u;
            goto label_1ae250;
        }
    }
    ctx->pc = 0x1AE134u;
    // 0x1ae134: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1ae134u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1ae138: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ae13c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1ae13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1ae140: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x1ae140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1ae144: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae148: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ae148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ae14c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ae14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ae150: 0x6b03c  dsll32      $s6, $a2, 0
    ctx->pc = 0x1ae150u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1ae154: 0x3adfa  dsrl        $s5, $v1, 23
    ctx->pc = 0x1ae154u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) >> 23);
    // 0x1ae158: 0x222882f  dsubu       $s1, $s1, $v0
    ctx->pc = 0x1ae158u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
    // 0x1ae15c: 0x249ea248  addiu       $fp, $a0, -0x5DB8
    ctx->pc = 0x1ae15cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943304));
    // 0x1ae160: 0x7a03c  dsll32      $s4, $a3, 0
    ctx->pc = 0x1ae160u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1ae164: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ae168: 0x241700c2  addiu       $s7, $zero, 0xC2
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x1ae16c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1ae16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1ae170:
    // 0x1ae170: 0x16183e  dsrl32      $v1, $s6, 0
    ctx->pc = 0x1ae170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x1ae174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae178: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x1ae178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ae17c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1AE17Cu;
    {
        const bool branch_taken_0x1ae17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE17Cu;
        // 0x1ae180: 0x12923a  dsrl        $s2, $s2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae17c) {
            ctx->pc = 0x1AE23Cu;
            goto label_1ae23c;
        }
    }
    ctx->pc = 0x1AE184u;
    // 0x1ae184: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ae184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ae188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae18c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1ae18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1ae190: 0x3c05c400  lui         $a1, 0xC400
    ctx->pc = 0x1ae190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50176 << 16));
    // 0x1ae194: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ae194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ae198: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1ae198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1ae19c: 0xc06b946  jal         func_1AE518
    ctx->pc = 0x1AE19Cu;
    SET_GPR_U32(ctx, 31, 0x1AE1A4u);
    ctx->pc = 0x1AE1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE19Cu;
    // 0x1ae1a0: 0xdc460000  ld          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE518u, 0x1AE19Cu, 0x1AE1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1A4u;
label_1ae1a4:
    // 0x1ae1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1a8: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE1A8u;
    SET_GPR_U32(ctx, 31, 0x1AE1B0u);
    ctx->pc = 0x1AE1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1A8u;
    // 0x1ae1ac: 0x2b72825  or          $a1, $s5, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE1A8u, 0x1AE1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1B0u;
label_1ae1b0:
    // 0x1ae1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1b4: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE1B4u;
    SET_GPR_U32(ctx, 31, 0x1AE1BCu);
    ctx->pc = 0x1AE1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1B4u;
    // 0x1ae1b8: 0x14283e  dsrl32      $a1, $s4, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE1B4u, 0x1AE1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1BCu;
label_1ae1bc:
    // 0x1ae1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1c0: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE1C0u;
    SET_GPR_U32(ctx, 31, 0x1AE1C8u);
    ctx->pc = 0x1AE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1C0u;
    // 0x1ae1c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE1C0u, 0x1AE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1C8u;
label_1ae1c8:
    // 0x1ae1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1cc: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE1CCu;
    SET_GPR_U32(ctx, 31, 0x1AE1D4u);
    ctx->pc = 0x1AE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1CCu;
    // 0x1ae1d0: 0x66250010  daddiu      $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE1CCu, 0x1AE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1D4u;
label_1ae1d4:
    // 0x1ae1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1d8: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE1D8u;
    SET_GPR_U32(ctx, 31, 0x1AE1E0u);
    ctx->pc = 0x1AE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1D8u;
    // 0x1ae1dc: 0x66250020  daddiu      $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE1D8u, 0x1AE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1E0u;
label_1ae1e0:
    // 0x1ae1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1e4: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE1E4u;
    SET_GPR_U32(ctx, 31, 0x1AE1ECu);
    ctx->pc = 0x1AE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1E4u;
    // 0x1ae1e8: 0x66250030  daddiu      $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)48);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE1E4u, 0x1AE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1ECu;
label_1ae1ec:
    // 0x1ae1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1f0: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE1F0u;
    SET_GPR_U32(ctx, 31, 0x1AE1F8u);
    ctx->pc = 0x1AE1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1F0u;
    // 0x1ae1f4: 0x66250040  daddiu      $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE1F0u, 0x1AE1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1F8u;
label_1ae1f8:
    // 0x1ae1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1fc: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE1FCu;
    SET_GPR_U32(ctx, 31, 0x1AE204u);
    ctx->pc = 0x1AE200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1FCu;
    // 0x1ae200: 0x66250050  daddiu      $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE1FCu, 0x1AE204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE204u;
label_1ae204:
    // 0x1ae204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae208: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE208u;
    SET_GPR_U32(ctx, 31, 0x1AE210u);
    ctx->pc = 0x1AE20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE208u;
    // 0x1ae20c: 0x66250060  daddiu      $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)96);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE208u, 0x1AE210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE210u;
label_1ae210:
    // 0x1ae210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae214: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE214u;
    SET_GPR_U32(ctx, 31, 0x1AE21Cu);
    ctx->pc = 0x1AE218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE214u;
    // 0x1ae218: 0x66250070  daddiu      $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE214u, 0x1AE21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE21Cu;
label_1ae21c:
    // 0x1ae21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae220: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE220u;
    SET_GPR_U32(ctx, 31, 0x1AE228u);
    ctx->pc = 0x1AE224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE220u;
    // 0x1ae224: 0x66250080  daddiu      $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE220u, 0x1AE228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE228u;
label_1ae228:
    // 0x1ae228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae22c: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x1AE22Cu;
    SET_GPR_U32(ctx, 31, 0x1AE234u);
    ctx->pc = 0x1AE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE22Cu;
    // 0x1ae230: 0x66250090  daddiu      $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB20u, 0x1AE22Cu, 0x1AE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE234u;
label_1ae234:
    // 0x1ae234: 0xc06ba9e  jal         func_1AEA78
    ctx->pc = 0x1AE234u;
    SET_GPR_U32(ctx, 31, 0x1AE23Cu);
    ctx->pc = 0x1AE238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE234u;
    // 0x1ae238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA78u, 0x1AE234u, 0x1AE23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE23Cu;
label_1ae23c:
    // 0x1ae23c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ae23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ae240: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1ae240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ae244: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ae248: 0x1662ffc9  bne         $s3, $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1AE248u;
    {
        const bool branch_taken_0x1ae248 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE248u;
        // 0x1ae24c: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae248) {
            ctx->pc = 0x1AE170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae170;
        }
    }
    ctx->pc = 0x1AE250u;
label_1ae250:
    // 0x1ae250: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ae250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ae254: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1ae254u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae258: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1ae258u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae25c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1ae25cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae260: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1ae260u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae264: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ae264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae268: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ae268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae26c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ae26cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae270: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ae270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae278: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE278u;
        // 0x1ae27c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE280u;
}
