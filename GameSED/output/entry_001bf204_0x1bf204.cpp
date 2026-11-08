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

// Function: entry_001bf204
// Address: 0x1bf204 - 0x1bf2b4
void entry_001bf204_0x1bf204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf204_0x1bf204");
#endif

    switch (ctx->pc) {
        case 0x1bf230u: goto label_1bf230;
        case 0x1bf278u: goto label_1bf278;
        default: break;
    }

    ctx->pc = 0x1bf204u;

    // 0x1bf204: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1BF204u;
    {
        const bool branch_taken_0x1bf204 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF204u;
        // 0x1bf208: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf204) {
            ctx->pc = 0x1BF2D0u;
            return;
        }
    }
    ctx->pc = 0x1BF20Cu;
    // 0x1bf20c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1bf20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1bf210: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bf210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf214: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1bf214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf218: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1bf218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf21c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1bf21cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf220: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x1bf220u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x1bf224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf228: 0xc0702d0  jal         func_1C0B40
    ctx->pc = 0x1BF228u;
    SET_GPR_U32(ctx, 31, 0x1BF230u);
    ctx->pc = 0x1BF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF228u;
    // 0x1bf22c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0B40u, 0x1BF228u, 0x1BF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF230u;
label_1bf230:
    // 0x1bf230: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1bf230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bf234: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1bf234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1bf238: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1bf238u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf23c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bf23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf240: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf248: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bf248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf24c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf250: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1bf250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1bf254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf258: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf25c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf260: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf264: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1bf264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf268: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1bf268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1bf26c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf26cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf270: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF270u;
    SET_GPR_U32(ctx, 31, 0x1BF278u);
    ctx->pc = 0x1BF274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF270u;
    // 0x1bf274: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF270u, 0x1BF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF278u;
label_1bf278:
    // 0x1bf278: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1bf278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1bf27c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf280: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1bf280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1bf284: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1bf284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bf288: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x1bf288u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1bf28c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bf28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bf290: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bf290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf294: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1bf294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1bf298: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1bf298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf29c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2a4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1bf2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1bf2a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf2b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bf2b4u;
}
