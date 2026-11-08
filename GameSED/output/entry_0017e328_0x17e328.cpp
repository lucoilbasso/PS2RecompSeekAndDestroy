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

// Function: entry_0017e328
// Address: 0x17e328 - 0x17e380
void entry_0017e328_0x17e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e328_0x17e328");
#endif

    switch (ctx->pc) {
        case 0x17e344u: goto label_17e344;
        default: break;
    }

    ctx->pc = 0x17e328u;

    // 0x17e328: 0x115400  sll         $t2, $s1, 16
    ctx->pc = 0x17e328u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x17e32c: 0x105c00  sll         $t3, $s0, 16
    ctx->pc = 0x17e32cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x17e330: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x17e330u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x17e334: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x17e334u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x17e338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e33c: 0xc06ac76  jal         func_1AB1D8
    ctx->pc = 0x17E33Cu;
    SET_GPR_U32(ctx, 31, 0x17E344u);
    ctx->pc = 0x17E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E33Cu;
    // 0x17e340: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB1D8u, 0x17E33Cu, 0x17E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E344u;
label_17e344:
    // 0x17e344: 0x2301818  mult        $v1, $s1, $s0
    ctx->pc = 0x17e344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17e348: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x17e348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x17e34c: 0xac960004  sw          $s6, 0x4($a0)
    ctx->pc = 0x17e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 22));
    // 0x17e350: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x17e350u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x17e354: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x17e354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x17e358: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17e35c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17e35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17e360: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17e360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17e364: 0x96430020  lhu         $v1, 0x20($s2)
    ctx->pc = 0x17e364u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e368: 0x96420022  lhu         $v0, 0x22($s2)
    ctx->pc = 0x17e368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x17e36c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x17e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17e370: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17e370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17e374: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x17e374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17e378: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x17E378u;
    {
        const bool branch_taken_0x17e378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E378u;
        // 0x17e37c: 0x2c3b021  addu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e378) {
            ctx->pc = 0x17E2B8u;
            return;
        }
    }
    ctx->pc = 0x17E380u;
}
