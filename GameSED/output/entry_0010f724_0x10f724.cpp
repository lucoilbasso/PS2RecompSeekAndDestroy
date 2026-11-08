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

// Function: entry_0010f724
// Address: 0x10f724 - 0x10f800
void entry_0010f724_0x10f724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f724_0x10f724");
#endif

    switch (ctx->pc) {
        case 0x10f7e0u: goto label_10f7e0;
        case 0x10f7f4u: goto label_10f7f4;
        default: break;
    }

    ctx->pc = 0x10f724u;

    // 0x10f724: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f728: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x10f728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10f72c: 0x2484d168  addiu       $a0, $a0, -0x2E98
    ctx->pc = 0x10f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955368));
    // 0x10f730: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10f730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10f734: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x10f734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x10f738: 0x30a57fff  andi        $a1, $a1, 0x7FFF
    ctx->pc = 0x10f738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x10f73c: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x10f73cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10f740: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x10f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x10f744: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x10f744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x10f748: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x10f748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10f74c: 0x53840  sll         $a3, $a1, 1
    ctx->pc = 0x10f74cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10f750: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x10f750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10f754: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x10f754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x10f758: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x10f758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x10f75c: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x10f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10f760: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x10f760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10f764: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x10f764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x10f768: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x10f768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x10f76c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x10f76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x10f770: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x10f770u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x10f774: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x10f774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x10f778: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10f778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10f77c: 0x24467fff  addiu       $a2, $v0, 0x7FFF
    ctx->pc = 0x10f77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x10f780: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x10f780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f784: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x10f784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x10f788: 0xc2400b  movn        $t0, $a2, $v0
    ctx->pc = 0x10f788u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x10f78c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10f78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f790: 0x24667fff  addiu       $a2, $v1, 0x7FFF
    ctx->pc = 0x10f790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x10f794: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x10f794u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x10f798: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10f798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f79c: 0x24a97fff  addiu       $t1, $a1, 0x7FFF
    ctx->pc = 0x10f79cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x10f7a0: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x10f7a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x10f7a4: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x10f7a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x10f7a8: 0x883c3  sra         $s0, $t0, 15
    ctx->pc = 0x10f7a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 8), 15));
    // 0x10f7ac: 0x125380b  movn        $a3, $t1, $a1
    ctx->pc = 0x10f7acu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x10f7b0: 0x293c3  sra         $s2, $v0, 15
    ctx->pc = 0x10f7b0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 15));
    // 0x10f7b4: 0x2602fe98  addiu       $v0, $s0, -0x168
    ctx->pc = 0x10f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966936));
    // 0x10f7b8: 0x78bc3  sra         $s1, $a3, 15
    ctx->pc = 0x10f7b8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 15));
    // 0x10f7bc: 0x2a0300b4  slti        $v1, $s0, 0xB4
    ctx->pc = 0x10f7bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x10f7c0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x10f7c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x10f7c4: 0x2623fe98  addiu       $v1, $s1, -0x168
    ctx->pc = 0x10f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966936));
    // 0x10f7c8: 0x2a2600b4  slti        $a2, $s1, 0xB4
    ctx->pc = 0x10f7c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x10f7cc: 0x2a4500b4  slti        $a1, $s2, 0xB4
    ctx->pc = 0x10f7ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x10f7d0: 0x2642fe98  addiu       $v0, $s2, -0x168
    ctx->pc = 0x10f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x10f7d4: 0x66880a  movz        $s1, $v1, $a2
    ctx->pc = 0x10f7d4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x10f7d8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F7D8u;
    SET_GPR_U32(ctx, 31, 0x10F7E0u);
    ctx->pc = 0x10F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7D8u;
    // 0x10f7dc: 0x45900a  movz        $s2, $v0, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F7D8u, 0x10F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7E0u;
label_10f7e0:
    // 0x10f7e0: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F7E0u;
    {
        const bool branch_taken_0x10f7e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x10F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7E0u;
        // 0x10f7e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7e0) {
            ctx->pc = 0x10F800u;
            return;
        }
    }
    ctx->pc = 0x10F7E8u;
    // 0x10f7e8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f7ec: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F7ECu;
    SET_GPR_U32(ctx, 31, 0x10F7F4u);
    ctx->pc = 0x10F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7ECu;
    // 0x10f7f0: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F7ECu, 0x10F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7F4u;
label_10f7f4:
    // 0x10f7f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F7F4u;
    {
        const bool branch_taken_0x10f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f7f4) {
            ctx->pc = 0x10F810u;
            return;
        }
    }
    ctx->pc = 0x10F7FCu;
    // 0x10f7fc: 0x0  nop
    ctx->pc = 0x10f7fcu;
    // NOP
    ctx->pc = 0x10f800u;
}
