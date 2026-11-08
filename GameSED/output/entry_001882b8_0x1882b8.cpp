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

// Function: entry_001882b8
// Address: 0x1882b8 - 0x188328
void entry_001882b8_0x1882b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001882b8_0x1882b8");
#endif

    switch (ctx->pc) {
        case 0x1882c0u: goto label_1882c0;
        default: break;
    }

    ctx->pc = 0x1882b8u;

    // 0x1882b8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1882B8u;
    SET_GPR_U32(ctx, 31, 0x1882C0u);
    ctx->pc = 0x1882BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882B8u;
    // 0x1882bc: 0x8ee4000c  lw          $a0, 0xC($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1882B8u, 0x1882C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882C0u;
label_1882c0:
    // 0x1882c0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1882c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1882c4: 0x8e820154  lw          $v0, 0x154($s4)
    ctx->pc = 0x1882c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x1882c8: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1882c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x1882cc: 0x34e70010  ori         $a3, $a3, 0x10
    ctx->pc = 0x1882ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x1882d0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1882d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1882d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1882d8: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1882d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1882dc: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x1882dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x1882e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1882e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1882e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1882E4u;
    {
        const bool branch_taken_0x1882e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E4u;
        // 0x1882e8: 0xaee30004  sw          $v1, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882e4) {
            ctx->pc = 0x188328u;
            return;
        }
    }
    ctx->pc = 0x1882ECu;
    // 0x1882ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1882ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882f0: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1882f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1882f4: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x1882f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1882f8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1882f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1882fc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1882fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x188300: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x188300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x188304: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x188304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x188308: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x188308u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x18830c: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x18830cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x188310: 0x34210030  ori         $at, $at, 0x30
    ctx->pc = 0x188310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48);
    // 0x188314: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x188314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x188318: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x188318u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x18831c: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x18831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x188320: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x188320u;
    {
        const bool branch_taken_0x188320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188320u;
        // 0x188324: 0xdf828c90  ld          $v0, -0x7370($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188320) {
            ctx->pc = 0x188360u;
            return;
        }
    }
    ctx->pc = 0x188328u;
}
