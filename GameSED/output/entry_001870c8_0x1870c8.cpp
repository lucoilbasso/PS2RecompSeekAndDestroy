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

// Function: entry_001870c8
// Address: 0x1870c8 - 0x187154
void entry_001870c8_0x1870c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001870c8_0x1870c8");
#endif

    switch (ctx->pc) {
        case 0x1870d8u: goto label_1870d8;
        default: break;
    }

    ctx->pc = 0x1870c8u;

    // 0x1870c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1870c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1870cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1870ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1870d0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1870D0u;
    SET_GPR_U32(ctx, 31, 0x1870D8u);
    ctx->pc = 0x1870D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870D0u;
    // 0x1870d4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1870D0u, 0x1870D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870D8u;
label_1870d8:
    // 0x1870d8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1870d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1870dc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1870dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1870e0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1870e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x1870e4: 0x34e70010  ori         $a3, $a3, 0x10
    ctx->pc = 0x1870e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x1870e8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1870e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1870ec: 0xae280004  sw          $t0, 0x4($s1)
    ctx->pc = 0x1870ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 8));
    // 0x1870f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1870f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1870f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1870F4u;
    {
        const bool branch_taken_0x1870f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1870F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870F4u;
        // 0x1870f8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870f4) {
            ctx->pc = 0x187154u;
            return;
        }
    }
    ctx->pc = 0x1870FCu;
    // 0x1870fc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1870fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x187100: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x187104: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x187108: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x187108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18710c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x18710cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x187110: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x187110u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x187114: 0x34e70020  ori         $a3, $a3, 0x20
    ctx->pc = 0x187114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
    // 0x187118: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x187118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18711c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x187120: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x187120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187124: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x187124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x187128: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x187128u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x18712c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x187130: 0xfd250000  sd          $a1, 0x0($t1)
    ctx->pc = 0x187130u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 5));
    // 0x187134: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x187134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x187138: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x187138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18713c: 0xdc4304b0  ld          $v1, 0x4B0($v0)
    ctx->pc = 0x18713cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x187140: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x187140u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x187144: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x187144u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x187148: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x187148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x18714c: 0x34e70030  ori         $a3, $a3, 0x30
    ctx->pc = 0x18714cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)48);
    // 0x187150: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x187150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->pc = 0x187154u;
}
