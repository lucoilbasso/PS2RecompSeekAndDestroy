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

// Function: PowerOffCB
// Address: 0x1ba228 - 0x1ba2a0
void PowerOffCB_0x1ba228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PowerOffCB_0x1ba228");
#endif

    switch (ctx->pc) {
        case 0x1ba24cu: goto label_1ba24c;
        case 0x1ba268u: goto label_1ba268;
        case 0x1ba278u: goto label_1ba278;
        default: break;
    }

    ctx->pc = 0x1ba228u;

    // 0x1ba228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba22c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ba22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ba230: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ba230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ba234: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1ba234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba238: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1ba238u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1ba23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba240: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ba240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ba244: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1BA244u;
    SET_GPR_U32(ctx, 31, 0x1BA24Cu);
    ctx->pc = 0x1BA248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA244u;
    // 0x1ba248: 0xae32c0a4  sw          $s2, -0x3F5C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951076), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1BA244u, 0x1BA24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA24Cu;
label_1ba24c:
    // 0x1ba24c: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1ba24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1ba250: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ba250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ba254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba258: 0x24a5a1e8  addiu       $a1, $a1, -0x5E18
    ctx->pc = 0x1ba258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943208));
    // 0x1ba25c: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x1ba25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x1ba260: 0xc06df1a  jal         func_1B7C68
    ctx->pc = 0x1BA260u;
    SET_GPR_U32(ctx, 31, 0x1BA268u);
    ctx->pc = 0x1BA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA260u;
    // 0x1ba264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C68u, 0x1BA260u, 0x1BA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA268u;
label_1ba268:
    // 0x1ba268: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA268u;
    {
        const bool branch_taken_0x1ba268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA268u;
        // 0x1ba26c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba268) {
            ctx->pc = 0x1BA27Cu;
            goto label_1ba27c;
        }
    }
    ctx->pc = 0x1BA270u;
    // 0x1ba270: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1BA270u;
    SET_GPR_U32(ctx, 31, 0x1BA278u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1BA270u, 0x1BA278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA278u;
label_1ba278:
    // 0x1ba278: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ba27c:
    // 0x1ba27c: 0xae20c0a4  sw          $zero, -0x3F5C($s1)
    ctx->pc = 0x1ba27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951076), GPR_U32(ctx, 0));
    // 0x1ba280: 0xac52c0bc  sw          $s2, -0x3F44($v0)
    ctx->pc = 0x1ba280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951100), GPR_U32(ctx, 18));
    // 0x1ba284: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ba284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba28c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ba28cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba290: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ba290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba298: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA298u;
        // 0x1ba29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA2A0u;
}
