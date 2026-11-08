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

// Function: entry_001c20b4
// Address: 0x1c20b4 - 0x1c2128
void entry_001c20b4_0x1c20b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c20b4_0x1c20b4");
#endif

    switch (ctx->pc) {
        case 0x1c20fcu: goto label_1c20fc;
        default: break;
    }

    ctx->pc = 0x1c20b4u;

    // 0x1c20b4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c20b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c20b8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c20bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c20c0: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x1c20c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c20c4: 0xae25083c  sw          $a1, 0x83C($s1)
    ctx->pc = 0x1c20c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 5));
    // 0x1c20c8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c20c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c20cc: 0x8e300838  lw          $s0, 0x838($s1)
    ctx->pc = 0x1c20ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x1c20d0: 0x41f02  srl         $v1, $a0, 28
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x1c20d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1c20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1c20d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c20dc: 0x2662dcc0  addiu       $v0, $s3, -0x2340
    ctx->pc = 0x1c20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958272));
    // 0x1c20e0: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x1c20e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1c20e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c20e8: 0xb08006  srlv        $s0, $s0, $a1
    ctx->pc = 0x1c20e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x1c20ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c20f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c20f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20f4: 0xc0706ee  jal         func_1C1BB8
    ctx->pc = 0x1C20F4u;
    SET_GPR_U32(ctx, 31, 0x1C20FCu);
    ctx->pc = 0x1C20F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20F4u;
    // 0x1c20f8: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BB8u, 0x1C20F4u, 0x1C20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20FCu;
label_1c20fc:
    // 0x1c20fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c20fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2100: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c2100u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c2104: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c2104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2108: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x1c2108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
    // 0x1c210c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c210cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2110: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c2110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2114: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c2114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2118: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c2118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c211c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c211cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2120: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2120u;
        // 0x1c2124: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2128u;
}
