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

// Function: entry_00175280
// Address: 0x175280 - 0x1752dc
void entry_00175280_0x175280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175280_0x175280");
#endif

    switch (ctx->pc) {
        case 0x1752a4u: goto label_1752a4;
        default: break;
    }

    ctx->pc = 0x175280u;

    // 0x175280: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x175280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175284: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x175284u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x175288: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x175288u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x17528c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x17528cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175290: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x175290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x175294: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x175294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x175298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17529c: 0xc05d440  jal         func_175100
    ctx->pc = 0x17529Cu;
    SET_GPR_U32(ctx, 31, 0x1752A4u);
    ctx->pc = 0x1752A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17529Cu;
    // 0x1752a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175100u, 0x17529Cu, 0x1752A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752A4u;
label_1752a4:
    // 0x1752a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1752a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1752a8: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x1752a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x1752ac: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1752acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1752b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1752b0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x1752b4: 0x34a5b410  ori         $a1, $a1, 0xB410
    ctx->pc = 0x1752b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46096);
    // 0x1752b8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1752b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1752bc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1752bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1752c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1752c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1752c4: 0x34c6b430  ori         $a2, $a2, 0xB430
    ctx->pc = 0x1752c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46128);
    // 0x1752c8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1752c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1752cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1752ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1752d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1752d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1752d4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1752d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1752d8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1752d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1752dcu;
}
