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

// Function: entry_0013c0d0
// Address: 0x13c0d0 - 0x13c148
void entry_0013c0d0_0x13c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c0d0_0x13c0d0");
#endif

    switch (ctx->pc) {
        case 0x13c0e4u: goto label_13c0e4;
        case 0x13c0f8u: goto label_13c0f8;
        default: break;
    }

    ctx->pc = 0x13c0d0u;

    // 0x13c0d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13c0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c0d4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x13c0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x13c0d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x13c0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13c0dc: 0xc060aa2  jal         func_182A88
    ctx->pc = 0x13C0DCu;
    SET_GPR_U32(ctx, 31, 0x13C0E4u);
    ctx->pc = 0x13C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C0DCu;
    // 0x13c0e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A88u, 0x13C0DCu, 0x13C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C0E4u;
label_13c0e4:
    // 0x13c0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c0e8: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x13C0E8u;
    {
        const bool branch_taken_0x13c0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13c0e8) {
            ctx->pc = 0x13C0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C0E8u;
            // 0x13c0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C19Cu;
            return;
        }
    }
    ctx->pc = 0x13C0F0u;
    // 0x13c0f0: 0xc0609fe  jal         func_1827F8
    ctx->pc = 0x13C0F0u;
    SET_GPR_U32(ctx, 31, 0x13C0F8u);
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x13C0F0u, 0x13C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C0F8u;
label_13c0f8:
    // 0x13c0f8: 0x8ec70160  lw          $a3, 0x160($s6)
    ctx->pc = 0x13c0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x13c0fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13c0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c100: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x13c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c104: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x13c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c108: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13c108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c110: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x13C110u;
    {
        const bool branch_taken_0x13c110 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C110u;
        // 0x13c114: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c110) {
            ctx->pc = 0x13C148u;
            return;
        }
    }
    ctx->pc = 0x13C118u;
    // 0x13c118: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x13c118u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13c11c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x13c11cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x13c120: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x13c120u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13c124: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x13c124u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x13c128: 0xdcc20010  ld          $v0, 0x10($a2)
    ctx->pc = 0x13c128u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13c12c: 0xfce20010  sd          $v0, 0x10($a3)
    ctx->pc = 0x13c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    // 0x13c130: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x13c130u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x13c134: 0xfce30018  sd          $v1, 0x18($a3)
    ctx->pc = 0x13c134u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 3));
    // 0x13c138: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x13c138u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13c13c: 0xfce20020  sd          $v0, 0x20($a3)
    ctx->pc = 0x13c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
    // 0x13c140: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x13c140u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x13c144: 0xfce30028  sd          $v1, 0x28($a3)
    ctx->pc = 0x13c144u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 3));
    ctx->pc = 0x13c148u;
}
