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

// Function: entry_001549b4
// Address: 0x1549b4 - 0x1549f8
void entry_001549b4_0x1549b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001549b4_0x1549b4");
#endif

    switch (ctx->pc) {
        case 0x1549ecu: goto label_1549ec;
        default: break;
    }

    ctx->pc = 0x1549b4u;

    // 0x1549b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1549b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1549b8: 0x2605079c  addiu       $a1, $s0, 0x79C
    ctx->pc = 0x1549b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
    // 0x1549bc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1549bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1549c0: 0xae421244  sw          $v0, 0x1244($s2)
    ctx->pc = 0x1549c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4676), GPR_U32(ctx, 2));
    // 0x1549c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1549c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1549c8: 0xae030844  sw          $v1, 0x844($s0)
    ctx->pc = 0x1549c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 3));
    // 0x1549cc: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1549d0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1549d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1549d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1549d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1549d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1549D8u;
    {
        const bool branch_taken_0x1549d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549D8u;
        // 0x1549dc: 0x8cb10010  lw          $s1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549d8) {
            ctx->pc = 0x1549F8u;
            return;
        }
    }
    ctx->pc = 0x1549E0u;
    // 0x1549e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1549e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1549e4: 0xc054016  jal         func_150058
    ctx->pc = 0x1549E4u;
    SET_GPR_U32(ctx, 31, 0x1549ECu);
    ctx->pc = 0x1549E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549E4u;
    // 0x1549e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x1549E4u, 0x1549ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549ECu;
label_1549ec:
    // 0x1549ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1549ECu;
    {
        const bool branch_taken_0x1549ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549ECu;
        // 0x1549f0: 0x8e62037c  lw          $v0, 0x37C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549ec) {
            ctx->pc = 0x154A38u;
            return;
        }
    }
    ctx->pc = 0x1549F4u;
    // 0x1549f4: 0x0  nop
    ctx->pc = 0x1549f4u;
    // NOP
    ctx->pc = 0x1549f8u;
}
