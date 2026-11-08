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

// Function: entry_00195bc8
// Address: 0x195bc8 - 0x195c80
void entry_00195bc8_0x195bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195bc8_0x195bc8");
#endif

    switch (ctx->pc) {
        case 0x195c78u: goto label_195c78;
        default: break;
    }

    ctx->pc = 0x195bc8u;

    // 0x195bc8: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x195bc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bcc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x195bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x195bd0: 0x3442130d  ori         $v0, $v0, 0x130D
    ctx->pc = 0x195bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4877);
    // 0x195bd4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x195bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x195bd8: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x195bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x195bdc: 0xfd630008  sd          $v1, 0x8($t3)
    ctx->pc = 0x195bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 3));
    // 0x195be0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x195be0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x195be4: 0x27858c90  addiu       $a1, $gp, -0x7370
    ctx->pc = 0x195be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x195be8: 0x27838c80  addiu       $v1, $gp, -0x7380
    ctx->pc = 0x195be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x195bec: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x195becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195bf0: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x195bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bf4: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x195bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x195bf8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x195bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x195bfc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x195bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x195c00: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x195c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c04: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x195c04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x195c08: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x195c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195c0c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x195c0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195c10: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x195c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x195c14: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x195c14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x195c18: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x195c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195c1c: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x195c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x195c20: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x195c20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x195c24: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x195c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x195c28: 0x16c3823  subu        $a3, $t3, $t4
    ctx->pc = 0x195c28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x195c2c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x195c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x195c30: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x195c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195c34: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x195c34u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x195c38: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x195c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x195c3c: 0xfd280008  sd          $t0, 0x8($t1)
    ctx->pc = 0x195c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 8));
    // 0x195c40: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x195c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x195c44: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x195c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x195c48: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x195c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x195c4c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x195c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x195c50: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x195c50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x195c54: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x195c54u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x195c58: 0xfd850008  sd          $a1, 0x8($t4)
    ctx->pc = 0x195c58u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 5));
    // 0x195c5c: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x195c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x195c60: 0x8ee201c4  lw          $v0, 0x1C4($s7)
    ctx->pc = 0x195c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 452)));
    // 0x195c64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195C64u;
    {
        const bool branch_taken_0x195c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C64u;
        // 0x195c68: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c64) {
            ctx->pc = 0x195C80u;
            return;
        }
    }
    ctx->pc = 0x195C6Cu;
    // 0x195c6c: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x195c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x195c70: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x195C70u;
    SET_GPR_U32(ctx, 31, 0x195C78u);
    ctx->pc = 0x195C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C70u;
    // 0x195c74: 0x248478c0  addiu       $a0, $a0, 0x78C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x195C70u, 0x195C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C78u;
label_195c78:
    // 0x195c78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x195C78u;
    {
        const bool branch_taken_0x195c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C78u;
        // 0x195c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c78) {
            ctx->pc = 0x195C90u;
            return;
        }
    }
    ctx->pc = 0x195C80u;
}
