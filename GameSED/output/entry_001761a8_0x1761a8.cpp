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

// Function: entry_001761a8
// Address: 0x1761a8 - 0x176260
void entry_001761a8_0x1761a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001761a8_0x1761a8");
#endif

    switch (ctx->pc) {
        case 0x176204u: goto label_176204;
        case 0x17621cu: goto label_17621c;
        case 0x176248u: goto label_176248;
        case 0x17625cu: goto label_17625c;
        default: break;
    }

    ctx->pc = 0x1761a8u;

label_1761a8:
    // 0x1761a8: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x1761a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1761ac: 0xc81804  sllv        $v1, $t0, $a2
    ctx->pc = 0x1761acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1761b0: 0x6100a  movz        $v0, $zero, $a2
    ctx->pc = 0x1761b0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1761b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1761b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1761b8: 0x28c40004  slti        $a0, $a2, 0x4
    ctx->pc = 0x1761b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1761bc: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1761bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x1761c0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1761c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x1761c4: 0x24e71000  addiu       $a3, $a3, 0x1000
    ctx->pc = 0x1761c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4096));
    // 0x1761c8: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x1761c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x1761cc: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x1761ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x1761d0: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1761D0u;
    {
        const bool branch_taken_0x1761d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1761D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761D0u;
        // 0x1761d4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761d0) {
            ctx->pc = 0x1761A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1761a8;
        }
    }
    ctx->pc = 0x1761D8u;
    // 0x1761d8: 0x26420060  addiu       $v0, $s2, 0x60
    ctx->pc = 0x1761d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1761dc: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x1761dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
    // 0x1761e0: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x1761e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x1761e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1761e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1761e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1761e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761ec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1761ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1761f0: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1761f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1761f4: 0x265100a0  addiu       $s1, $s2, 0xA0
    ctx->pc = 0x1761f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1761f8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1761f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1761fc: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1761FCu;
    SET_GPR_U32(ctx, 31, 0x176204u);
    ctx->pc = 0x176200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1761FCu;
    // 0x176200: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1761FCu, 0x176204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176204u;
label_176204:
    // 0x176204: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x176204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x176208: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x176208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17620c: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x17620cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x176210: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x176210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
    // 0x176214: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x176214u;
    SET_GPR_U32(ctx, 31, 0x17621Cu);
    ctx->pc = 0x176218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176214u;
    // 0x176218: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x176214u, 0x17621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17621Cu;
label_17621c:
    // 0x17621c: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x17621cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
    // 0x176220: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x176220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x176224: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x176224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x176228: 0x264800c0  addiu       $t0, $s2, 0xC0
    ctx->pc = 0x176228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x17622c: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x17622cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x176230: 0x24c66370  addiu       $a2, $a2, 0x6370
    ctx->pc = 0x176230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25456));
    // 0x176234: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x176234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176238: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x176238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x17623c: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x17623cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x176240: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x176240u;
    SET_GPR_U32(ctx, 31, 0x176248u);
    ctx->pc = 0x176244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176240u;
    // 0x176244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x176240u, 0x176248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176248u;
label_176248:
    // 0x176248: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x176248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17624c: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x17624cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    // 0x176250: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x176250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
    // 0x176254: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x176254u;
    SET_GPR_U32(ctx, 31, 0x17625Cu);
    ctx->pc = 0x176258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176254u;
    // 0x176258: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x176254u, 0x17625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17625Cu;
label_17625c:
    // 0x17625c: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x17625cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
    ctx->pc = 0x176260u;
}
