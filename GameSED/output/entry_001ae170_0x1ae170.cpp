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

// Function: entry_001ae170
// Address: 0x1ae170 - 0x1ae23c
void entry_001ae170_0x1ae170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae170_0x1ae170");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x1ae170u;

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
            return;
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
}
