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

// Function: ApMCardDataLoadMuluti__FP8ApcMCard
// Address: 0x11c0b8 - 0x11c2b4
void ApMCardDataLoadMuluti__FP8ApcMCard_0x11c0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMCardDataLoadMuluti__FP8ApcMCard_0x11c0b8");
#endif

    switch (ctx->pc) {
        case 0x11c128u: goto label_11c128;
        case 0x11c158u: goto label_11c158;
        case 0x11c170u: goto label_11c170;
        case 0x11c17cu: goto label_11c17c;
        case 0x11c190u: goto label_11c190;
        case 0x11c1dcu: goto label_11c1dc;
        case 0x11c1f8u: goto label_11c1f8;
        case 0x11c228u: goto label_11c228;
        case 0x11c250u: goto label_11c250;
        case 0x11c258u: goto label_11c258;
        default: break;
    }

    ctx->pc = 0x11c0b8u;

    // 0x11c0b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11c0bc: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x11c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11c0c0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x11c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x11c0c4: 0x24874600  addiu       $a3, $a0, 0x4600
    ctx->pc = 0x11c0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x11c0c8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x11c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x11c0cc: 0x24864614  addiu       $a2, $a0, 0x4614
    ctx->pc = 0x11c0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 17940));
    // 0x11c0d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c0d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11c0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x11c0d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11c0dc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11c0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x11c0e0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x11c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x11c0e4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x11c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x11c0e8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x11c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x11c0ec: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x11c0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x11c0f0: 0x8c834050  lw          $v1, 0x4050($a0)
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16464)));
    // 0x11c0f4: 0x8c854610  lw          $a1, 0x4610($a0)
    ctx->pc = 0x11c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17936)));
    // 0x11c0f8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x11c0f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11c0fc: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x11c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x11c100: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x11c100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11c104: 0x2407006d  addiu       $a3, $zero, 0x6D
    ctx->pc = 0x11c104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x11c108: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c10c: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x11c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x11c110: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11c110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11c114: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x11c114u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x11c118: 0x2694c540  addiu       $s4, $s4, -0x3AC0
    ctx->pc = 0x11c118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952256));
    // 0x11c11c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x11c11cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x11c120: 0x24974e00  addiu       $s7, $a0, 0x4E00
    ctx->pc = 0x11c120u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 19968));
    // 0x11c124: 0x26830e30  addiu       $v1, $s4, 0xE30
    ctx->pc = 0x11c124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3632));
label_11c128:
    // 0x11c128: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11c12c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x11c12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11c130: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11c130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11c134: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11c134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11c138: 0x0  nop
    ctx->pc = 0x11c138u;
    // NOP
    // 0x11c13c: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C13Cu;
    {
        const bool branch_taken_0x11c13c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x11C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C13Cu;
        // 0x11c140: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c13c) {
            ctx->pc = 0x11C128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c128;
        }
    }
    ctx->pc = 0x11C144u;
    // 0x11c144: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11c144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11c148: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x11c148u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c14c: 0x2456c0a8  addiu       $s6, $v0, -0x3F58
    ctx->pc = 0x11c14cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    // 0x11c150: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x11c150u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c154: 0x0  nop
    ctx->pc = 0x11c154u;
    // NOP
label_11c158:
    // 0x11c158: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x11c158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11c15c: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11C15Cu;
    {
        const bool branch_taken_0x11c15c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C15Cu;
        // 0x11c160: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c15c) {
            ctx->pc = 0x11C1B4u;
            goto label_11c1b4;
        }
    }
    ctx->pc = 0x11C164u;
    // 0x11c164: 0x32b1ffff  andi        $s1, $s5, 0xFFFF
    ctx->pc = 0x11c164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x11c168: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x11c168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c16c: 0x0  nop
    ctx->pc = 0x11c16cu;
    // NOP
label_11c170:
    // 0x11c170: 0x26840c50  addiu       $a0, $s4, 0xC50
    ctx->pc = 0x11c170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3152));
    // 0x11c174: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11C174u;
    SET_GPR_U32(ctx, 31, 0x11C17Cu);
    ctx->pc = 0x11C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C174u;
    // 0x11c178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11C174u, 0x11C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C17Cu;
label_11c17c:
    // 0x11c17c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c184: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c188: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11C188u;
    SET_GPR_U32(ctx, 31, 0x11C190u);
    ctx->pc = 0x11C18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C188u;
    // 0x11c18c: 0x244401d0  addiu       $a0, $v0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11C188u, 0x11C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C190u;
label_11c190:
    // 0x11c190: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c194: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c198: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c19c: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x11c19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11c1a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11c1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11c1a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c1a8: 0x244202a  slt         $a0, $s2, $a0
    ctx->pc = 0x11c1a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11c1ac: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11C1ACu;
    {
        const bool branch_taken_0x11c1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1ACu;
        // 0x11c1b0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1ac) {
            ctx->pc = 0x11C170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c170;
        }
    }
    ctx->pc = 0x11C1B4u;
label_11c1b4:
    // 0x11c1b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x11c1b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x11c1b8: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x11c1b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x11c1bc: 0x2aa2000c  slti        $v0, $s5, 0xC
    ctx->pc = 0x11c1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x11c1c0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x11C1C0u;
    {
        const bool branch_taken_0x11c1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1C0u;
        // 0x11c1c4: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1c0) {
            ctx->pc = 0x11C158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c158;
        }
    }
    ctx->pc = 0x11C1C8u;
    // 0x11c1c8: 0x86e20c30  lh          $v0, 0xC30($s7)
    ctx->pc = 0x11c1c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 3120)));
    // 0x11c1cc: 0x26e50c32  addiu       $a1, $s7, 0xC32
    ctx->pc = 0x11c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3122));
    // 0x11c1d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11c1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1d4: 0xc04615e  jal         func_118578
    ctx->pc = 0x11C1D4u;
    SET_GPR_U32(ctx, 31, 0x11C1DCu);
    ctx->pc = 0x11C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1D4u;
    // 0x11c1d8: 0xa6820c30  sh          $v0, 0xC30($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 3120), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118578u, 0x11C1D4u, 0x11C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1DCu;
label_11c1dc:
    // 0x11c1dc: 0x8ee30fe8  lw          $v1, 0xFE8($s7)
    ctx->pc = 0x11c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4072)));
    // 0x11c1e0: 0x24050ff0  addiu       $a1, $zero, 0xFF0
    ctx->pc = 0x11c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x11c1e4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x11c1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11c1e8: 0xae830fe8  sw          $v1, 0xFE8($s4)
    ctx->pc = 0x11c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4072), GPR_U32(ctx, 3));
    // 0x11c1ec: 0x8ee20fec  lw          $v0, 0xFEC($s7)
    ctx->pc = 0x11c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4076)));
    // 0x11c1f0: 0xae820fec  sw          $v0, 0xFEC($s4)
    ctx->pc = 0x11c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4076), GPR_U32(ctx, 2));
    // 0x11c1f4: 0x0  nop
    ctx->pc = 0x11c1f4u;
    // NOP
label_11c1f8:
    // 0x11c1f8: 0x2e51021  addu        $v0, $s7, $a1
    ctx->pc = 0x11c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x11c1fc: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x11c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x11c200: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x11c200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c204: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11c208: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x11c208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11c20c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C20Cu;
    {
        const bool branch_taken_0x11c20c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C20Cu;
        // 0x11c210: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c20c) {
            ctx->pc = 0x11C1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c1f8;
        }
    }
    ctx->pc = 0x11C214u;
    // 0x11c214: 0x26880008  addiu       $t0, $s4, 0x8
    ctx->pc = 0x11c214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11c218: 0x26e70008  addiu       $a3, $s7, 0x8
    ctx->pc = 0x11c218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x11c21c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x11c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x11c220: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x11c220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x11c224: 0x0  nop
    ctx->pc = 0x11c224u;
    // NOP
label_11c228:
    // 0x11c228: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x11c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x11c22c: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x11c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x11c230: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11c230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c234: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11c234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11c238: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x11c238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11c23c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C23Cu;
    {
        const bool branch_taken_0x11c23c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C23Cu;
        // 0x11c240: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c23c) {
            ctx->pc = 0x11C228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c228;
        }
    }
    ctx->pc = 0x11C244u;
    // 0x11c244: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c24c: 0x0  nop
    ctx->pc = 0x11c24cu;
    // NOP
label_11c250:
    // 0x11c250: 0x24e511c0  addiu       $a1, $a3, 0x11C0
    ctx->pc = 0x11c250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4544));
    // 0x11c254: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x11c254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11c258:
    // 0x11c258: 0x2e51021  addu        $v0, $s7, $a1
    ctx->pc = 0x11c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x11c25c: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x11c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x11c260: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x11c260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c264: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11c264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11c268: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x11c268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11c26c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C26Cu;
    {
        const bool branch_taken_0x11c26c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C26Cu;
        // 0x11c270: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c26c) {
            ctx->pc = 0x11C258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c258;
        }
    }
    ctx->pc = 0x11C274u;
    // 0x11c274: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11c274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11c278: 0x2902006e  slti        $v0, $t0, 0x6E
    ctx->pc = 0x11c278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x11c27c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C27Cu;
    {
        const bool branch_taken_0x11c27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C27Cu;
        // 0x11c280: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c27c) {
            ctx->pc = 0x11C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c250;
        }
    }
    ctx->pc = 0x11C284u;
    // 0x11c284: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c288: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11c288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c28c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11c28cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c290: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11c290u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11c294: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11c294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c298: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11c298u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11c29c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x11c29cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c2a0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x11c2a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11c2a4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x11c2a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c2a8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x11c2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11c2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11C2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2ACu;
        // 0x11c2b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C2B4u;
}
