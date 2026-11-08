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

// Function: entry_00156248
// Address: 0x156248 - 0x156300
void entry_00156248_0x156248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156248_0x156248");
#endif

    switch (ctx->pc) {
        case 0x1562f0u: goto label_1562f0;
        default: break;
    }

    ctx->pc = 0x156248u;

    // 0x156248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15624c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15624cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156254: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x156254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15625c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x15625cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x156260: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x156260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x156264: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x156264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x156268: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x156268u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x15626c: 0x2408dfff  addiu       $t0, $zero, -0x2001
    ctx->pc = 0x15626cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x156270: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x156270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x156274: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x156274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x156278: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x156278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x15627c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15627cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x156280: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x156280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x156284: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x156284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x156288: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x156288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x15628c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x15628cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x156290: 0xae22017c  sw          $v0, 0x17C($s1)
    ctx->pc = 0x156290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 2));
    // 0x156294: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x156294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x156298: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x156298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x15629c: 0x248435c8  addiu       $a0, $a0, 0x35C8
    ctx->pc = 0x15629cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13768));
    // 0x1562a0: 0xa2000055  sb          $zero, 0x55($s0)
    ctx->pc = 0x1562a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x1562a4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1562a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1562a8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1562a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1562ac: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x1562acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1562b0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x1562b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1562b4: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x1562b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1562b8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1562b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1562bc: 0xa4c00004  sh          $zero, 0x4($a2)
    ctx->pc = 0x1562bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1562c0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1562c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1562c4: 0xa4c00006  sh          $zero, 0x6($a2)
    ctx->pc = 0x1562c4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1562c8: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x1562c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1562cc: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x1562ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x1562d0: 0xae230180  sw          $v1, 0x180($s1)
    ctx->pc = 0x1562d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 3));
    // 0x1562d4: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x1562d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1562d8: 0xa4e00004  sh          $zero, 0x4($a3)
    ctx->pc = 0x1562d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1562dc: 0xa4e00006  sh          $zero, 0x6($a3)
    ctx->pc = 0x1562dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1562e0: 0xa4e00002  sh          $zero, 0x2($a3)
    ctx->pc = 0x1562e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1562e4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1562e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1562e8: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1562E8u;
    SET_GPR_U32(ctx, 31, 0x1562F0u);
    ctx->pc = 0x1562ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562E8u;
    // 0x1562ec: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1562E8u, 0x1562F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562F0u;
label_1562f0:
    // 0x1562f0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1562f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1562f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1562f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562f8: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1562F8u;
    SET_GPR_U32(ctx, 31, 0x156300u);
    ctx->pc = 0x1562FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562F8u;
    // 0x1562fc: 0x248435b0  addiu       $a0, $a0, 0x35B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1562F8u, 0x156300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156300u;
}
