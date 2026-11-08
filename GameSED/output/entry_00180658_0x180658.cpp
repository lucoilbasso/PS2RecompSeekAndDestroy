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

// Function: entry_00180658
// Address: 0x180658 - 0x1806d4
void entry_00180658_0x180658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180658_0x180658");
#endif

    switch (ctx->pc) {
        case 0x1806a0u: goto label_1806a0;
        default: break;
    }

    ctx->pc = 0x180658u;

    // 0x180658: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x180658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18065c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18065cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x180660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180664: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x180668: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x180668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18066c: 0x94640038  lhu         $a0, 0x38($v1)
    ctx->pc = 0x18066cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x180670: 0x1086001b  beq         $a0, $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x180670u;
    {
        const bool branch_taken_0x180670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x180674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180670u;
        // 0x180674: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180670) {
            ctx->pc = 0x1806E0u;
            return;
        }
    }
    ctx->pc = 0x180678u;
    // 0x180678: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x180678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x18067c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18067cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x180680: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x180680u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180684: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x180684u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x180688: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x180688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18068c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x18068Cu;
    {
        const bool branch_taken_0x18068c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18068Cu;
        // 0x180690: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18068c) {
            ctx->pc = 0x1806E0u;
            return;
        }
    }
    ctx->pc = 0x180694u;
    // 0x180694: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x180694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180698: 0xc0600d6  jal         func_180358
    ctx->pc = 0x180698u;
    SET_GPR_U32(ctx, 31, 0x1806A0u);
    ctx->pc = 0x18069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180698u;
    // 0x18069c: 0xc60d0014  lwc1        $f13, 0x14($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x180358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180358u, 0x180698u, 0x1806A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1806A0u;
label_1806a0:
    // 0x1806a0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x1806a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x1806a4: 0x2464dbc0  addiu       $a0, $v1, -0x2440
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1806a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1806A8u;
    {
        const bool branch_taken_0x1806a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1806ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806A8u;
        // 0x1806ac: 0x38450001  xori        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806a8) {
            ctx->pc = 0x1806DCu;
            return;
        }
    }
    ctx->pc = 0x1806B0u;
    // 0x1806b0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1806b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1806b4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1806b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1806b8: 0x8f838d3c  lw          $v1, -0x72C4($gp)
    ctx->pc = 0x1806b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x1806bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1806bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1806c0: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x1806c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x1806c4: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x1806c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x1806c8: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1806c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x1806cc: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1806ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x1806d0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1806d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1806d4u;
}
